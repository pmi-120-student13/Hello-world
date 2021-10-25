#include <iostream>
using namespace std;
int main()
{
 setlocale(LC_ALL, "RUS");
 int n;
 float a, b, k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0;
 cout << "Введите кол-во" << "\n";
 cin >> n;
 float* x = new float[n], * y = new float[n], * x2 = new float[n], * xY = new float[n], * Y = new float[n];
 for (int i = 0; i < n; i++)
	{
 cout << "Введите x" << i + 1 << "\n";
 cin >> x[i];
 k1 += x[i];
 x2[i] = x[i] * x[i];
 k4 += x2[i];
    
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Введите y" << i + 1 << "\n";
		cin >> y[i];
		k2 += y[i];
                Y[i] = log(y[i]);
                k3 += Y[i];
                xY[i] = x[i]*Y[i];
                k5 += xY[i];
	}
	cout << "массив Х" << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
	cout << "\n";
	cout << "Массив Y" << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << y[i] << " ";
	}
	cout << "\n";
	cout << "Массив произведений x на y " << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << xy[i] << " ";
    
	}
	cout << "\n";
	cout << "Массив x^2" << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << x2[i] << " ";
	}
	cout << "\n";
	log(a) = (k3 * k4 - k5 * k1) / (n * k4 - k1 * k1);
	b = (n * k5 - k3 * k1) / n * k4 - k1 * k1;
	cout << "Коэфицент a=" << a << "\n";
	cout << "Коэфицент b=" << b << "\n";
	cout << "y=" << a << "x+" << b << "\n";
	for (int i = 0; i < n; i++)
	{
		k6 += (y[i] - (a * x[i] + b)) * (y[i] - (a * x[i] + b));

		cout << "Погрешность расчетов составляет:" << k6;
	}
