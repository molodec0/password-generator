#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;


//Код функций рандома.
string random(int max) {
	vector <string> random = {"a", "b", "c"};

	random_device rd;
	mt19937 gen(rd());

	uniform_int_distribution<> dist(max);

	int random_index = dist(gen);

	return random[random_index];
}

//Код главной функций.
int main() {
	system("chcp 1251 > nul");

	cout << "Пароль: " << endl;

	system("pause > nul");

	return 0;
}