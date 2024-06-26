#include <iostream> #include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int f = 1;
    int x;
    cout << "Введите число, факториал которого хотите найти" << endl;
    cin >> x;
    int y = x;
    if (x < 0)
        cout << "Нельзя найти факториал отрицательного числа" << endl;
    else
    {
        if (x == 0)
            cout << "Факториал 0 = 1" << endl;
        else {
            while (x > 1) {
                f = f * x;
                x--;
            }
            cout << "Факториал числа " << y << " равен " << f << endl;
        }
    }

    return 0;
}