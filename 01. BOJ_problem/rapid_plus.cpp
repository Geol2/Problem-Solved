#include<stdio.h>

int main() {
	int num, a, b, sum;

	scanf("%d", &num);
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		scanf("%d", &b);

		if (a > 1001 || b > 1001)
			return 0;

		sum = a + b;

		printf("%d\n", sum);
	}
	return 0;
}