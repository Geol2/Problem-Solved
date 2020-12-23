//#include<stdio.h>
//
//int main() {
//	double test_case;
//	
//	double stu_num;
//	double stu_score[1005];
//	double avg;
//	double rank = 0;
//	int i,k = 0; int j = 0;
//	double upper = 0;
//
//	scanf_s("%lf", &test_case);
//
//	for (int k = 0; k < test_case; k++) {
//		
//		scanf_s("%lf", &stu_num);
//
//		for (i = 0; i < stu_num; i++) {
//			scanf_s("%lf", &stu_score[i]);
//		}
//	
//		for (i = 0; i < stu_num; i++) {
//			stu_score[i + 1] += stu_score[i];
//		}
//
//		avg = stu_score[i-1] / stu_num;
//
//		for ( i = stu_num; i > 0 ; i--) {
//			if (i == 1)
//				break;
//			
//			stu_score[i - 1] -= stu_score[i - 2];
//			
//		}
//		
//		double i = stu_num;
//		double upper = 0;
//		for (j = 0; j < i; j++) {
//			if (stu_score[j] > avg) {
//				upper++;
//			} 
//		}
//
//		printf("%.3lf%%\n", (upper/stu_num)*100);
//	}
//	return 0;
//}