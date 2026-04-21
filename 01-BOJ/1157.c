#include<stdio.h>
#include<string.h>

int main() {
	char word[1000001];
	int alphabet[27] = { 0, };

	int max = 0, many = 0, answer = 0; //many는 가장 많이 사용된 알파벳이 두 개 이상인지 봄.
							// max는 가장 큰 값을 가진 알파벳을 저장.
	scanf("%s", &word);
	
	int len = strlen(word); //길이를 넣음.
	
	for (int i = 0; i < len; i++) {
		if(word[i] >= 'a' && word[i] <= 'z')
			word[i] -= 32;
		alphabet[word[i] - 65]++;
	}
	//printf("%d, %d, %d\n", word[0], word[1], word[2]); Q 81, Q 81, W 87
	//소문자를 대문자로 다 바꿈. 구분을 안하므로...
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			answer = i;
			many = 0;
			many++;
		}
		else if (alphabet[i] == max) {
			many++;
		}
		else
			continue;
	}

	if (many > 1)
		printf("?\n");
	else
		printf("%c\n", answer+65);
	return 0;
}