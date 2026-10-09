#include <iostream>
using namespace std;
int score;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите значение баллов:";
	cin >> score;
	if (score <= 100 && score >= 90) cout << "Оценка за тест: A";
	else if (score <= 89 && score >= 80) cout << "Оценка за тест: B";
	else if (score <= 79 && score >= 70) cout << "Оценка за тест: C";
	else if (score <= 69 && score >= 60) cout << "Оценка за тест: D";
	else if (score < 60) cout << "Оценка за тест: F";
	else cout << "Ошибка ввода";
	return 0;
}