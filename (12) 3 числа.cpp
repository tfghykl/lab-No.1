#include <iostream>

int main() {
	int a{};
	int b{};
	int c{};
	int biggest{}, smallest{}, middle{};
	std::cout << "input  3 numbers:\n";
	std::cin >> a >> b >> c;
	biggest = a;
	if (b > biggest) biggest = b;
	if (c > biggest) biggest = c;
	smallest = a;
	if (b < smallest) smallest = b;
	if (c < smallest) smallest = c;
	if ((a == biggest && b == smallest) || (a == smallest && b == biggest)) middle = c;
	if ((c == biggest && b == smallest) || (c == smallest && b == biggest)) middle = a;
	if ((a == biggest && c == smallest) || (a == smallest && c == biggest)) middle = b;
	std::cout << "smallest is:\n"<< smallest << "\n biggest is:\n" << biggest << "\n average is:\n << (a+b+c)/3.0 << "\n mult is\n" << a * b * c;
	return 0;

}
