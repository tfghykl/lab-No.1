#include <iostream>

int main() {
	int number{};
	setlocale(LC_ALL, "Russian");
	std::cout << "input your score:\n";
	std::cin >> number;
	if (number < 17) std::cout << "Плохо";
	else if (number < 30) std::cout << "Удовлетворительно";
	else if (number < 60) std::cout << "Хорошо";
	else std::cout << "Отлично";
	return 0;
}