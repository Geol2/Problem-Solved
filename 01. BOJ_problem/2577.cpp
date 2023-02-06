#include <iostream>
#include <string>

int main()
{
	int a, b, c;
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	char arr[1001] = {'0', };
	std::cin >> a >> b >> c;

	int result = a * b * c;

	sprintf(arr, "%d", result);
	//std::cout << arr << std::endl;
	
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '0')
			zero++;
		else if (arr[i] == '1')
			one++;
		else if (arr[i] == '2')
			two++;
		else if (arr[i] == '3')
			three++;
		else if (arr[i] == '4')
			four++;
		else if (arr[i] == '5')
			five++;
		else if (arr[i] == '6')
			six++;
		else if (arr[i] == '7')
			seven++;
		else if (arr[i] == '8')
			eight++;
		else if (arr[i] == '9')
			nine++;
	}

	std::cout << zero << std::endl << one << std::endl << two << std::endl << three << std::endl << four << std::endl << five << std::endl << six << std::endl << seven << std::endl << eight << std::endl << nine;

	return 0;
}