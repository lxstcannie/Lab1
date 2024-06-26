#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    cout << "Введите натуральное число" << endl;
    int n;
    cin >> n;
    int k=0;
    if (n <= 0)
        cout << "Число не натуральное" << endl;
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                k++;
                break;
            }
        }
        if (!k)
            cout << "Число простое" << endl;
        else
            cout << "Число не является простым" << endl;
    }
    return 0;
}
