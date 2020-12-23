/*#include<stdio.h>
#include<string.h>

int main() {
	char ch[1000001];
	int cnt = 0;
	int i;
	int len;

	gets(ch);

	len = strlen(ch);

	for (i = 0; ch[i] != '\0'; i++) {
		if (ch[i] == ' ')
			cnt++;
	}
	
	if (ch[0] == ' ')
		cnt--;

	if (ch[len - 1] == ' ')
		cnt--;
	
	cnt++;

	printf("%d\n", cnt);
	return 0;
}	*/