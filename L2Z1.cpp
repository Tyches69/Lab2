/*
	Задание 1. Ввести балл 0..100. Вывести одну из категорий: 90..100 — A, 80..89 — B, 70..79 — C, 60..69 — 
	D, ниже 60 — F. Значения вне диапазона считать ошибкой. Условия должны быть записаны так, чтобы 
	граничные значения 90, 80, 70 и 60 попадали в правильную категорию.
*/

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
