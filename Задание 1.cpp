// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	/*cout << "Ввидите число от 1 до 500";
	int a;
	int i;
	int sum = 0;
	cin >> a;
	i = a;
	for (a <= 500; i++; a++);
	{sum = sum + a;
	cout << sum << "\n"; }*/

	/*int x, y;

	cout << "Число: ";
	cin >> x;

	cout << "Степень: ";
	cin >> y;

	for (int i = 1; i < y; i++) {
		x = x * x;
		cout << x;
	}*/
	/*double s = 0;
	for (int i = 1; i <= 1000; i++) {
		s += i;
	}
	cout << s / 1000;*/
	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			cout << i * j << "\t";
		cout << endl;
    }*/


	int a,b , c;
	cout << "Введите первое число: ";
	cin >> b;
	cout << "Введите второе число: ";
	cin >> c;

	for (int a = b; a <= c; a++)
		cout << a << endl;
	}