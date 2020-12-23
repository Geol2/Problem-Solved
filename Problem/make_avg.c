#include<stdio.h>
//
//int main() {
//	float input;
//	float score[1005], rescore[1005];
//	float max=0;
//	int i, j;
//
//	scanf_s("%f", &input);
//
//	if (input > 1000)
//		return 0;
//
//	for (i = 0; i < input; i++) {
//		scanf_s("%f", &score[i]);
//
//		if (score[i] > 100)
//			return 0;
//	}
//
//
//	for (i = 0; i < input; i++) {
//		if (max < score[i])
//			max = score[i];
//
//	}
//	//printf("%d", max);
//
//	for (i = 0; i < input; i++) {
//		score[i + 1] += score[i];
//	}
//	//printf("%d", score[i-1]);
//
//	for (i = 0; i < input; i++) {
//		if(i == 0)
//			rescore[i] = (score[i] / max) * 100;
//		else
//			rescore[i] = (score[i]-score[i-1]) / max * 100;
//	}
//
//	for (j = 0; j < input; j++) {
//		rescore[j + 1] += rescore[j];
//	
//	}
//	printf("%.2f\n", rescore[j - 1] / input);
//
//	return 0;
//}