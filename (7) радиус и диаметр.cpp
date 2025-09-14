#include <iostream>
#include <cmath>

int main() {
	int circle_area{};
	const double PI = 3.1415926;

	std::cout << "input  circle area:\n";
	while (circle_area < 1) {
		std::cin >> circle_area;
		if (circle_area < 1) std::cout << "invalid value\n";
	}
	std::cout << "radius is:\n" << sqrt (circle_area / PI) << '\n';
	std::cout << "diameter is:\n" << 2 * sqrt(circle_area / PI);
	return 0;

}
