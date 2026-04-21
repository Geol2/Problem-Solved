
#include<iostream>
using namespace std;

char arr[3072][6143];

void tri(int N, int x, int y) {
	if (N == 3) {
		arr[y][x + 2] = '*';
		arr[y + 1][x + 1] = '*';
		arr[y + 1][x + 3] = '*';
	}
	return;
}

int main() {
	int N;
	int k = 0; // �� ��

	scanf("%d", &N);
	
	tri(N, 0, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < (N * 2) - 1; j++) {
			printf(" ");
		}
		printf(" ",arr[])
	}
	return 0;
} // 3, 5 6 11
