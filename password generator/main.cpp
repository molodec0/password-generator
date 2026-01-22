#include <iostream>
#include <string>
#include <iostream>
#include <random>

using namespace std;

string generateRandomPassword(const vector<string>& charSet, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, charSet.size() - 1);

    string password;
    for (int i = 0; i < max; ++i) {
        password += charSet[dist(gen)];
    }
    return password;
}

int main() {
    system("chcp 1251 > nul");

    string numbers, english_characters, special_characters;
    vector<string> charSet = {};

    cout << "В вашем пароле должны быть цифры: ";
    cin >> numbers;
    if (numbers == "да") {
        charSet = { "1", "2", "3",  "4",  "5",  "6",  "7",  "8",  "9",  "0" };
    }
    else if (numbers == "нет") {
        charSet = {};
    }
    else {
        cout << "Ошибка! Некорректный ввод в консоль!" << endl;
        return 1;
    }

    cout << "В вашем пароле должны быть английские символы: ";
    cin >> english_characters;
    if (english_characters == "да") {
        if (numbers == "да") {
            charSet = { "1", "2", "3",  "4",  "5",  "6",  "7",  "8",  "9",  "0",
        "a", "b", "c",  "d",  "e",  "f",  "g",  "h",  "i",  "j",  "k",  "l",  "m",  "n",
        "o",  "p",  "q",  "r",  "s",  "t",  "w",  "x",  "y",  "z",
        "A", "B", "C",  "D",  "E",  "F",  "G",  "H",  "I",  "J",  "K",  "L",  "M",  "N",
        "O",  "P",  "Q",  "R",  "S",  "T",  "W",  "X",  "Y",  "Z" };
        }
        else if (numbers == "нет") {
            charSet = { "a", "b", "c",  "d",  "e",  "f",  "g",  "h",  "i",  "j",  "k",  "l",  "m",  "n",
        "o",  "p",  "q",  "r",  "s",  "t",  "w",  "x",  "y",  "z",
        "A", "B", "C",  "D",  "E",  "F",  "G",  "H",  "I",  "J",  "K",  "L",  "M",  "N",
        "O",  "P",  "Q",  "R",  "S",  "T",  "W",  "X",  "Y",  "Z" };
        }
    }
    else if (english_characters == "нет") {
        if (numbers == "да") {
            charSet = { "1", "2", "3",  "4",  "5",  "6",  "7",  "8",  "9",  "0" };
        }
        else if (numbers == "нет") {
            charSet = {};
        }
    }
    else {
        cout << "Ошибка! Некорректный ввод в консоль!" << endl;
        return 1;
    }

    cout << "В вашем пароле должны быть специальные символы: ";
    cin >> special_characters;
    if (special_characters == "да") {
        if (english_characters == "да") {
            if (numbers == "да") {
                charSet = { "1", "2", "3",  "4",  "5",  "6",  "7",  "8",  "9",  "0",
                "a", "b", "c",  "d",  "e",  "f",  "g",  "h",  "i",  "j",  "k",  "l",  "m",  "n",
                "o",  "p",  "q",  "r",  "s",  "t",  "w",  "x",  "y",  "z",
                "A", "B", "C",  "D",  "E",  "F",  "G",  "H",  "I",  "J",  "K",  "L",  "M",  "N",
                "O",  "P",  "Q",  "R",  "S",  "T",  "W",  "X",  "Y",  "Z",
                "-", "_", "+", "=", "(", ")", "*", "&", "?" };
            }
            else if (numbers == "нет") {
                charSet = { "a", "b", "c",  "d",  "e",  "f",  "g",  "h",  "i",  "j",  "k",  "l",  "m",  "n",
                "o",  "p",  "q",  "r",  "s",  "t",  "w",  "x",  "y",  "z",
                "A", "B", "C",  "D",  "E",  "F",  "G",  "H",  "I",  "J",  "K",  "L",  "M",  "N",
                "O",  "P",  "Q",  "R",  "S",  "T",  "W",  "X",  "Y",  "Z",
                "-", "_", "+", "=", "(", ")", "*", "&", "?" };
            }
        }
        else if (english_characters == "нет") {
            if (numbers == "да") {
                charSet = { "1", "2", "3",  "4",  "5",  "6",  "7",  "8",  "9",  "0",
                "-", "_", "+", "=", "(", ")", "*", "&", "?" };
            }
            else if (numbers == "нет") {
                charSet = { "-", "_", "+", "=", "(", ")", "*", "&", "?" };
            }
        }
    }
    else if (special_characters == "нет") {
        if (english_characters == "да") {
            charSet = { "1", "2", "3",  "4",  "5",  "6",  "7",  "8",  "9",  "0",
            "a", "b", "c",  "d",  "e",  "f",  "g",  "h",  "i",  "j",  "k",  "l",  "m",  "n",
            "o",  "p",  "q",  "r",  "s",  "t",  "w",  "x",  "y",  "z",
            "A", "B", "C",  "D",  "E",  "F",  "G",  "H",  "I",  "J",  "K",  "L",  "M",  "N",
            "O",  "P",  "Q",  "R",  "S",  "T",  "W",  "X",  "Y",  "Z" };
        }
        else if (english_characters == "нет") {
            if (numbers == "да") {
                charSet = { "1", "2", "3",  "4",  "5",  "6",  "7",  "8",  "9",  "0" };
            }
            else if (numbers == "нет") {
                cout << " ";
                return 1;
            }
        }
    }
    else {
        cout << "Ошибка! Некорректный ввод в консоль!" << endl;
        return 1;
    }

    int max;
    cout << "Введите желаемое количество символов в пароле: ";
    cin >> max;

    string password = generateRandomPassword(charSet, max);
    cout << "Ваш пароль: " << password << endl;

    system("pause > nul");

    return 0;
}
