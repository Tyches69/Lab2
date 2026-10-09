#include<iostream>
char course;
int score, bscore;
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите код курса (P - Programming, M - Mathematics, W - Web): ";
	cin >> course;
	cout << "Введите реpультат теста: ";
	cin >> score;
	if (score < 0 || score >100) {
		cout << "Введено некоректное количество баллов";
		return 1;
	}
	switch (course) {
	case'p':
	case'P': {
		cout << "Для курса Programming требуется дополнительный балл по математике.\n" << "Введите балл по математике: ";
		cin >> bscore;
		if (score >= 65 && bscore >= 60)  cout << "Вы приняты на курс";;
		return 0;
	}
	case'w':
	case'W': {
		cout << "Для курса Web требуется дополнительный балл по английскому.\n" << "Введите балл по англйскому: ";
		cin >> bscore;
		if (score >= 70 && bscore >= 50) cout << "Вы приняты на курс";;
		return 0;
	}
	case'm':
	case'M': {
		if (score >= 60)  cout << "Вы приняты на курс";
		return 0;
	}
	default: {
		cout << "Ошибка: Неверный код курса\n";
		return 1;
	}
	}
	cout << "Вы не приняты, недостаток баллов";
    return 0;
}