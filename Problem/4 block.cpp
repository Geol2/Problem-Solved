/*
#include<cstdio>
#include<string.h>
#define max(a,b) (((a)>(b))?(a):(b));
//#define _CRT_SECURE_NO_WARNINGS;
const int ABC = 987654321;

int a, b;
int arr[11][50];
int dp[10*25][ 1<<(10+3) ];

int func(int z, int x) {
	if (z == a*b ) {
		return x == 0 ? 0:-ABC;
	}

	int &ret = dp[z][x];
	if (ret != -1) {
		return ret;
	}
	ret = 0;
	int q = (z + a + 2) / a;
	int w = (z + a + 2) % a; // 이전의 a+1 개수를 기억.
	if ( x & 1 ) {
		return ret = func(z+1, (x|(((arr[w][q]=='1') ? 1 : 0)<<(a+2)))>>1) + ((arr[w][q]=='1')?1:0);
	}
	else {
		ret = max(ret, func(z + 1, (x|((arr[w][q]=='1')?1:0) << (a + 2)))>>1) + 1 + ((arr[w][q] == '1') ? 1 : 0);
			if (z%a != a-1 && z/a != b-1) {
				if ((x&(1<<1))==0) {
					if ((x&(1<<(a))) == 0 ) {
						if (x&(1<<(a+1)) == 0 ) {
							x |= (1 << 0);
							x |= (1 << 1);
							x |= (1 << (a));
							x |= (1 << (a + 1));
							x |= (((arr[w][q] == '1') ? 1 : 0) << (a + 2));
							ret = max(ret, func(a + 1, z >> 1) + 16 + ((arr[w][q] == '1') ? 1 : 0));
						}
					}
				}
			}
	}
	return ret;
}

int main() {
	scanf_s("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		scanf_s("%s", arr[i]);
	}//( input line 1 ) and (i < a input arr[i] ) 

	memset(dp, -1, sizeof(dp));
	int c = 0, answer = 0;
	//answer and c => d
	for (int k = 0, j = 0; k < b && j < a + 2; k++) {
		for (int i = 0; i < a && j < a+2 ; i++, j++) {
			if (arr[i][k] == '1' ) {
				c |= ( 1<<j );
				answer++;
			}
		}
	}
	printf("%d", func(0,c) + answer);
	return 0;
}
*/