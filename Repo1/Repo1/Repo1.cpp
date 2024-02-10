#include <iostream>
using namespace std;

int main() {
    setlocale(0, "rus");
    int year;

    cout << "Введите год: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " Год високосный ";
            else
                cout << year << " Год не високосный ";
        }
        else
            cout << year << " Год високосный ";
    }
    else
        cout << year << " Год не високосный";

    return 0;
}