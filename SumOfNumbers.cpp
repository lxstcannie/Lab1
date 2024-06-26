#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	long int a;

	cout << "Введите целое число" << endl;
	cin >> a;
	long int sum = 0;
	if (a < 0)
		a = a * (-1);
	while (a >= 10) {
		sum = sum + a % 10;
		a = a / 10;
	}
	sum = sum + a;
	cout << "Сумма цифр этого числа равна " << sum << endl;
	return 0;
}
