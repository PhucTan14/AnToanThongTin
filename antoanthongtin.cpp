#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int choice;
    int number;

    do {
        cout << "1. Kiểm tra số nguyên tố" << endl;
        cout << "2. Thoát" << endl;
        cout << "Nhập lựa chọn của bạn: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nhập một số nguyên dương: ";
                cin >> number;
                if (isPrime(number)) {
                    cout << number << " là số nguyên tố." << endl;
                } else {
                    cout << number << " không phải là số nguyên tố." << endl;
                }
                break;
            case 2:
                cout << "Thoát chương trình." << endl;
                break;
            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
        }
    } while (choice != 2);

    return 0;
}
