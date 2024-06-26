#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите коэффициенты уравнения ax^2 + bx + c = 0" << endl << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	int d, x1, x2;
	d = b * b - 4 * a * c;
	if (d >= 0 && a != 0) {
		x1 = ((-1) * b - sqrt(d)) / (2 * a);
		x2 = ((-1) * b + sqrt(d)) / (2 * a);
		cout << "Корни уравнения х1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
	else {
		if (d < 0)
			cout << "Дискриминант меньше нуля, нет корней" << endl;
		else{
			if (b != 0) {
				x1 = ((-1) * c) / b;
				cout << "Корень уравнения х = " << x1 << endl;
			}
			else {
				if (c == 0)
					cout << "Корней бесконечно много" << endl;
				else
					cout << "Уравнение некоректно";
			}
		}
	}

	return 0;
}
