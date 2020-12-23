/*#include <stdio.h>
int main() {
	int N, count = 1; //입력값과 지나는 칸의 개수
	
	scanf_s("%d", &N);

	int rang = 1; // 숫자의 범위 ex) 2-7, 8-19, 20-37
	int tmp = 1; // 6의 배수를 더하기 위해?	 

	while (1) {
		if (rang >= N)
			break;
	
		tmp = 6 * (count++);
		rang += tmp;
	}

	printf("%d\n", count);

	return 0;
}*/