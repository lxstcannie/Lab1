#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
    double x, n, ans;
    cout << "Введите число" << endl;
    cin >> x;
    cout << "Введите степень, в которую хотите возвести число" << endl;
    cin >> n;
    ans = pow(x, n);
    cout << x << " в степени " << n << " равно " << ans;
    return 0;
}
