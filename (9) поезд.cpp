 #include <iostream>
#include <cmath>

int main() {
	int departure_hours{}, departure_minutes{};
	int arrival_hours{}, arrival_minutes{};
	int minutes_amount{};
	std::cout << "input arrival time (HH MM)\n";
	std::cin >> arrival_hours >> arrival_minutes;
	while (arrival_hours < 0 || arrival_hours > 23 || arrival_minutes > 59 || arrival_minutes < 0) {
		if (arrival_hours < 0 || arrival_hours > 23 || arrival_minutes > 59 || arrival_minutes < 0) {
			std::cout << "invalid value, input again valid arrival time\n";
			std::cin >> arrival_hours >> arrival_minutes;
		}
	}
	std::cout << "input departure time (HH MM)\n";
	std::cin >> departure_hours >> departure_minutes;
	while (departure_hours < 0 || departure_hours > 23 || departure_minutes > 59 || departure_minutes < 0) {	
		if (departure_hours < 0 || departure_hours > 23 || departure_minutes > 59 || departure_minutes < 0) {
			std::cout << "invalid value, input again valid arrival time\n";
			std::cin >> departure_hours >> departure_minutes;
		}
	}
	minutes_amount = - 60 * arrival_hours - arrival_minutes + 60 * departure_hours + departure_minutes;
	if (minutes_amount < 0) {
		std::cout << "time of stop is: " << (1440 + minutes_amount) / 60 << " hours " << (1440 - minutes_amount) % 60 << " minutes" << '\n';
	}
	else if (minutes_amount == 0) { 
		std::cout << "the train did not stop\n";
	}
	else {
		std::cout << "time of stop is: " << minutes_amount / 60  << " hours " << minutes_amount % 60 << " minutes" << '\n';
	}
	return 0;
}