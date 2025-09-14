 #include <iostream>
#include <cmath>

int main() {
	int departure_hours{}, departure_minutes{};
	int arrival_hours{}, arrival_minutes{};
	int min_amt{};
	std::cout << "input your triangle's vertices (x,y):\n";
	while (arrival_hours < 0 || arrival_hours > 23 || arrival_minutes > 59 || arrival_minutes < 0) {
		std::cout << "input arrival time (HH MM)\n";
		std::cin >> arrival_hours, arrival_minutes;
		if (arrival_hours < 0 || arrival_hours > 23 || arrival_minutes > 59 || arrival_minutes < 0) std::cout << "invalid value, input again valid arrival time\n";
	}
	while (departure_hours < 0 || departure_hours > 23 || departure_minutes > 59 || departure_minutes < 0) {
		std::cout << "input arrival time (HH MM)\n";
		std::cin >> departure_hours, departure_minutes;
		if (departure_hours < 0 || departure_hours > 23 || departure_minutes > 59 || departure_minutes < 0) std::cout << "invalid value, input again valid arrival time\n";
	}
	min_amt = 60 * arrival_hours + arrival_minutes - 60 * departure_hours - departure_minutes;
	if (min_amt < 0) std::cout << "time of stop is: " << (1440 - min_amt) / 60 << " hours " << (1440 - min_amt) % 60 << "minutes" << '\n';
	else if (min_amt == 0) std::cout << "the train did not stop\n";
	else std::cout << "time of stop is: " << min_amt / 60 << " hours " << min_amt % 60 << "minutes" << '\n';
	return 0;
}