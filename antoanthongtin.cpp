#include <iostream>
using namespace std;

// Ham kiem tra so nguyen to
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Ham kiem tra nam nhuan
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int choice;
    do {
        cout << "\nMENU:\n";
        cout << "1. Kiem tra so nguyen to\n";
        cout << "2. Kiem tra nam nhuan\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int number;
            cout << "Nhap mot so nguyen duong: ";
            cin >> number;

            if (number <= 0) {
                cout << "Vui long nhap mot so nguyen duong!" << endl;
            }
            else {
                if (isPrime(number)) {
                    cout << number << " la so nguyen to." << endl;
                }
                else {
                    cout << number << " khong phai la so nguyen to." << endl;
                }
            }
            break;
        }
        case 2: {
            int year;
            cout << "Nhap mot nam: ";
            cin >> year;

            if (isLeapYear(year)) {
                cout << year << " la nam nhuan." << endl;
            }
            else {
                cout << year << " khong phai la nam nhuan." << endl;
            }
            break;
        }
        case 0:
            cout << "Thoat chuong trinh." << endl;
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
        }
    } while (choice != 0);

    return 0;
}


bool check_date_month_year(int day, int month, int year) {
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;

    // Số ngày tối đa của mỗi tháng
    int maxDaysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Kiểm tra năm nhuận
    if (isLeapYear(year))
        maxDaysInMonth[1] = 29;

    // Kiểm tra ngày có hợp lệ với tháng hay không
    if (day > maxDaysInMonth[month - 1])
        return false;

    return true;