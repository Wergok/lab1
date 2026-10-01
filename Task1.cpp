#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int num1, num2;
	double average;

	cout << "Введите два числа: ";
	cin >> num1 >> num2;

	average = static_cast<double>(num1 + num2) / 2.0;
	cout << "Среднее значение: " << average;
}