#include <iostream>

int main() {
	int circle_length{};
	const double PI = 3.1415926;

	std::cout << "input  circle length:\n";
	while (circle_length < 1) {
		std::cin >> circle_length;
		if (circle_length < 1) std::cout << "invalid value\n";
	}
	std::cout << "radius is:\n" << circle_length / (2 * PI) << '\n';

	std::cout << "area is:\n" << (circle_length / 2.0) * PI;
	return 0;
}