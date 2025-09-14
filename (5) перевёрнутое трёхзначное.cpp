#include <iostream>

int main() {
	int number{};
	std::cout << "input  3 digit number:\n";
	while (number < 100 || number > 999) {
		std::cin >> number;
		if (number < 100 || number > 999) std::cout << "invalid value\n";
	}
	std::cout << "you number backwards is:\n" << (number / 100) + (number % 10) * 100 + 10 * (number / 10 % 10) << '\n';
	return 0;
}