#include <iostream>
float score;
int visits, arrear, c;
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	while (c == 0) {
		cout << "Введите средний балл:";
		cin >> score;
		cout << "Введите посещаемость:";
		cin >> visits;
		cout << "Введите количество долгов:";
		cin >> arrear;
		if (score < 0 || score > 10 || visits < 0 || visits > 100 || arrear < 0) cout << "Ошибка ввода";
		else if (arrear > 0) cout << "Вы не прошли на углубленный курс, количество долгов не должно превышать 0";
		else if (score >= 8 && visits >= 80) cout << "Вы проходите на углубленный курс." << "Правило №1: Средний балл >= 8.0, посещаемость >= 80%, задолженностей нет.\n";
		else if (score >= 9.5 && visits >= 70) cout << "Вы проходите на углубленный курс" << "Правило №2: Средний балл >= 9.5, посещаемость >= 70%, задолженностей нет.\n";
		else cout << "Вы не прошли на углубленный курс, средний балл или посещаемость не удовлетворяет правилам";
		cin >> c;
	}
	return 0;
}