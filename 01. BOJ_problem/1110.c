#include<stdio.h>

int main() {
	int num, equal;
	int front, back, front_back;
	int count=0;

	scanf_s("%d", &num);
	equal = num;
	
	for (int i = 0; ; i++) {
		front = num / 10;
		back = num % 10;

		front_back = front + back;
		if (front_back >= 10) {
			front_back %= 10;
		}
		num = back * 10 + front_back;
		count++;

		if (num == equal) {
			printf("%d\n", count);
			break;
		}
	}
	return 0;
}