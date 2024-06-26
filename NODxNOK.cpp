
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
    int a, b;
    cout << "Введите 2 натуральных числа" << endl;
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Значения не должны быть нулевыми" << endl;
        return 0;
    }
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << "НОД этих чисел равен " << i<<endl;
            int temp = 0;
            temp = (a * b) / i;
            cout << "НОК этих чисел равен " << temp<<endl;
            break;
        }
    }
	return 0;
}
