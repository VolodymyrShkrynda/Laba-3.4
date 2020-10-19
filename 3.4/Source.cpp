// Lab_03_4.cpp
// < Шкринда Володимир
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 22
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double x0;//вхідний параметр
	double y0;//вхідний параметр
	double y; //вхідний параметр
	double R; //вхідний параметр
	cout << "R= "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "x0= "; cin >> x0;
	cout << "y0= "; cin >> y0;
	cout << "y = "; cin >> y;
	if ((x <= R && y >= (-1*R) && x >= 0) || 
		(y <= R && y >= 0 && (pow((x-x0),2)+(pow((y-y0),2)<=R*R ))))
			cout << "yes" << endl;

	
	
	
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
