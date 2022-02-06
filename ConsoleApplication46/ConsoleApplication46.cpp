//3. Підрахувати кількість слів у реченні.
#include<iostream>;
#include <locale>;
#include "windows.h";
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);//загуглив варіант рішення відображення української мови в консолі
	SetConsoleOutputCP(1251);//загуглив варіант рішення відображення української мови в консолі
	string text;
	cout << "Введіть будь ласка якийсь текст: " << endl;	//Просимо ввести текст для підрахунки слів у техксті
	getline(cin, text);	
	int size = text.size();		//вичисляємо розмір рядка
	int k = 0;	//Зміна для підрахунку кількості  пробілів для визначення слів 
	for (int i = 0; i < size; i++)
	{
		if (text[i] == ' ') { 
			k++; 
		}
	}
	cout << "Слів у тексті = " << k + 1; //Виводимо на екран к-сть слів.
}