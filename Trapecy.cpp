#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    setlocale(0,"");
    int l, n, x = 1;
    string a = "*";
    cout << "Введите размер верхней стороны трапеции" << endl;
    cin >> l;
    cout << "Введите количество строк в трапеции" << endl;
    cin >> n;
    if (l <= 0 || n < 0)
        cout << "Размер верхней стороны трапеции должен быть натуральным числом, а число строк целым числом не меньшим нуля" << endl;
    else {
        while (x < l)
        {
            a = a + "*";
            x++;
        }
        while (n > 0)
        {
            cout << a << endl;
            a = a + "*";
            n--;
        }
    }
    return 0;
}
