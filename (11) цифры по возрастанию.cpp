#include <iostream>

int main() {
	int number{};
	int a{};
	int b{};
	int c{};
	int biggest{};
	std::cout << "input  3 digit number:\n";
	while (number < 100 || number > 999) {
		std::cin >> number;
		if (number < 100 || number > 999) std::cout << "invalid value\n";
	}
	a = number / 100;
	b = number / 10 % 10;
	c = number % 10;
	biggest = a;
	if (b > biggest) biggest = b;
	if (c > biggest) biggest = c;
	if (biggest == a)
		if (b > c) std::cout << 100 * a + 10 * b + c;
		else std::cout << 100 * a + 10 * c + b;
	else if (biggest == b) if (a > c) std::cout << 100 * b + 10 * a + c;
		else std::cout << 100 * b + 10 * c + a;
	else if (biggest == c) if (b > a) std::cout << 100 * c + 10 * b + a;
		else std::cout << 100 * c + 10 * a + b;
	return 0;
}