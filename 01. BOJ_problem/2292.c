#include <stdio.h>
int main() {
	int N, count = 1; //�Է°��� ������ ĭ�� ����
	
	scanf_s("%d", &N);

	int rang = 1; // ������ ���� ex) 2-7, 8-19, 20-37
	int tmp = 1; // 6�� ����� ���ϱ� ����?	 

	while (1) {
		if (rang >= N)
			break;
	
		tmp = 6 * (count++);
		rang += tmp;
	}

	printf("%d\n", count);

	return 0;
}