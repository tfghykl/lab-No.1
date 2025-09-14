 #include <iostream>
#include <cmath>

int main() {
	int birth_year{}, birth_month{}, birth_day{};
	int current_year{}, current_month{}, current_day{};
	int days_amount{1};
	while (days_amount < 1);
	{
		std::cout << "input birth date (DD MM YY)\n";
		std::cin >> birth_day >> birth_month >> birth_year;
		while (birth_year < 0 || birth_month > 12 || birth_month < 0 || birth_day > 30 || birth_day < 0) {
			if (birth_year < 0 || birth_month > 12 || birth_month < 0 || birth_day > 30 || birth_day < 0) {
				std::cout << "invalid value, input again valid date\n";
				std::cin >> birth_day >> birth_month >> birth_year;
			}
		}
		std::cout << "input current date (DD MM YY)\n";
		std::cin >> current_day >> current_month >> current_year;
		while (current_year < 0 || current_month > 12 || current_month < 0 || current_day < 0 || current_day > 30) {
			if (current_year < 0 || current_month > 12 || current_month < 0 || current_day < 0 || current_day > 30) {
				std::cout << "invalid value, input valid date\n";
				std::cin >> current_day >> current_month >> current_year;
			}
		}
		days_amount = current_year * 360 + current_month * 30 + current_day - birth_year * 360 - birth_month * 30 - birth_day;
	}
	std::cout << "he/she is " << days_amount / 360 << " years " << days_amount / 30 - (days_amount / 360) * 12 << " months and " << days_amount - 30 * (days_amount / 30) << " days old\n";
	return 0;
}