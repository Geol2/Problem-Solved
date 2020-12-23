#include <iostream>
#include <string>

int main()
{
	int arr[1000000] = { 0, };
	int a, b;
	int min = 0, max = 0;

	std::cin >> a;
	for (int i = 0; i < a; i++ ) {
		std::cin >> b;
		arr[i] = b;
	}

	min = arr[0];
	max = arr[0];
	for (int i = 0; i < a; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	std::cout << min << " " << max << std::endl;
	return 0;
}