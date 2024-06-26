#include <iostream>

using namespace std;

int reverse_number(int number)
{
    int n = 0;
    while (number)
    {
        n = 10 * n + number % 10;
        number /= 10;
    }

    return n;
}


int main()
{
    setlocale(0, "");
    int number;
    cout << "Введите число" << endl;
    cin >> number;
    if (number == reverse_number(number))
        cout << "Число является палиндромом" << endl;
    else
        cout << "Число не является палиндромом" << endl;
    return 0;
}
