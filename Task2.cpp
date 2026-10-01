#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	double stipend, extraIncome, expenses;
	
	cout << "Введите стипуху, доп. доход, расходы: ";
	cin >> stipend >> extraIncome >> expenses;

	double balance = stipend + extraIncome - expenses;
	cout << "Баланс: " << balance << " ";
	
	if (balance > 0) {
		cout << "Профицит";
	}
	else if(balance == 0)
	{
		cout << "ровно 0";
	}
	else
	{
		cout << "дефецит";
	}
}