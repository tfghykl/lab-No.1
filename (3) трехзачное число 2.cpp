#include <iostream>

int main() {
	int number{};
	std::cout << "input  3 digit number:\n";
	while (number < 100 || number > 999) {
		std::cin >> number;
		if (number < 100 || number > 999) std::cout << "invalid value\n";
	}
	std::cout << "changed number is:\n" << number / 100 * 110000 + number / 10 % 10 * 1100 + number % 10 % 10 * 11;
	return 0;
}