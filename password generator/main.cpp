#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;


//��� ������� �������.
string random(int max) {
	vector <string> random = {"a", "b", "c"};

	random_device rd;
	mt19937 gen(rd());

	uniform_int_distribution<> dist(max);

	int random_index = dist(gen);

	return random[random_index];
}

//��� ������� �������.
int main() {
	system("chcp 1251 > nul");

	cout << "������: " << endl;

	system("pause > nul");

	return 0;
}