#include <iostream>

int main() {
	int side{};
	std::cout << "input  3 digit number:\n";
	while (number < 0) {
		std::cin >> number;
		if (number < 0) std::cout << "invalid value";
	}
	std::cout << "pereimetr is \n" << 4 * side << " and area is \n"<< side * side;
	return 0;

}

