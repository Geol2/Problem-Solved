#include <iostream>

int main()
{
	int hours, miniute;
	std::cin >> hours >> miniute;

	miniute -= 45;
	if (miniute < 0) {
		if (hours == 0) {
			hours = 24;
		}
		hours--;
		miniute += 60;
	}
	
	std::cout << hours << " " << miniute << std::endl;
	return 0;
}