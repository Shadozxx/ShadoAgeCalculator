#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	int age;
	system("chcp 1251 > nul");
	cout << "Калькулятор возраста от Shado" << endl;
	cout << "Введите ваш возраст > ";
	cin >> age;
	cout << "\nДумаем..." << endl;
	Sleep(2000);
	system("cls");
	cout << "Ваш возраст: " << age << " лет" << endl;
	if (age <= 6) {
		cout << "Завтра в садик, вырубаем комп...";
		system("shutdown /s /t 5");
	}
	else {
		cout << "Проверка завершена! Можно закрыть программу...";
		system("pause > nul");
	}
	return 0;
}