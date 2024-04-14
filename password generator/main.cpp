#include <iostream> 
#include <string> 
#include <vector> 
#include <random> 

using namespace std; 

//Код функций рандома.
string generateRandomPassword() { // Объявление функции random, которая возвращает строку
	vector<string> random = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
		"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "m", "l", "n", "o", "p"}; // Создание вектора строк с тремя элементами

	random_device rd; // Создание объекта для генерации случайных чисел
	mt19937 gen(rd()); // Создание генератора случайных чисел с использованием устройства случайных чисел
	uniform_int_distribution<> dist(0, random.size() - 1); // Создание объекта для равномерного распределения случайных чисел в диапазоне от min до размера вектора max

	int random_index = dist(gen); // Генерация случайного индекса элемента вектора

	return random[random_index]; // Возврат случайного элемента из вектора
}

//Код главной функций.
int main() {
	system("chcp 1251 > nul");

	string password;
	int max;

	cout << "Какое количество символов в пароле вы хотите: ";
	cin >> max;

	for (; max > 0; max--) {
		password += generateRandomPassword();
	}

	cout << "Пароль: " << password << endl;

	system("pause > nul");

	return 0;
}
