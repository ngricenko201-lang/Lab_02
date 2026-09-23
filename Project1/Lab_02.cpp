// Lab_02.cpp
// < Гриценко Нікіта >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 4
#include <iostream>
//comment
using namespace std;
int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "x = "; cin >> x;
	
	z1 = ((sin(x) + sin(5*x) - sin(3*x)) / (cos(x) - cos(3*x) + cos(5*x)));
	z2 = tan(3*x);
	
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	
	cin.get();
	return 0;
}