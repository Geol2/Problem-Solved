#include <iostream>
#include <string>

int main()
{
	int looop = 9;
	int arr[10] = { 0, };
	int input = 0;
	int max = 0, index = 0;

	for (int i = 0; i < looop; i++) {
		std::cin >> input;
		arr[i] = input;
	}

	max = arr[0];
	for (int i = 0; i < looop; i++) {
		if (max <= arr[i]) {
			max = arr[i];
			index = i + 1;
		}
	}
	std::cout << max << " " << index << std::endl;
	return 0;
}