#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // !1

/*
 --! HW1 ! --
void Func_Sum() { // 함수.
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d %d %d %d\n", a + b, a - b, a*b, a / b);
}


int main() {

	Func_Sum(); // 함수 호출.

	return 0;
}

*/

/*
--!  H W 2  !--
void Func_Sum(double a, double b, double c) {

	printf("%lf %lf %lf %lf", a + b + c, a - b - c, a * b * c, a / b / c);
}


int main() {
	
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	Func_Sum(a, b, c);
	return 0;
}
*/

/* --! H W 3 !--  */
/*
double Func_Sum() {
	double a, b, c, sum;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	sum = a + b + c;

	return sum;
}

double Func_Sub() {
	double a, b, c, sub;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	sub = a - b - c;

	return sub;
}

double Func_Mul() {
	double a, b, c, mul;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	mul = a * b * c;

	return mul;
}

double Func_Div() {
	double a, b, c, div;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	div = a / b / c;

	return div;
}

int main() {
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	printf("%lf %lf %lf %lf", Func_Sum(), Func_Sub(), Func_Mul(), Func_Div());
	return 0;
}
*/

/* --! H W 4 !-- */
/*
double Func_Sum(double a, double b, double c) {
	double sum;

	sum = a + b + c;

	return sum;
}

double Func_Sub(double a, double b, double c) {
	double sub;

	sub = a - b - c;

	return sub;
}

double Func_Mul(double a, double b, double c) {
	double mul;

	mul = a * b * c;
	
	return mul;
}

double Func_Div(double a, double b, double c) {
	double div;

	div = a / b / c;

	return div;
}

int main() {
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	Func_Sum(a, b, c);
	Func_Sub(a, b, c);
	Func_Mul(a, b, c);
	Func_Div(a, b, c);

	printf("%lf %lf %lf %lf\n", Func_Sum(a, b, c), Func_Sub(a, b, c), Func_Mul(a, b, c), Func_Div(a, b, c));
	return 0;
}
*/

/*
#include<math.h>

double Quadratic_eq(double a, double b, double c) {
	
	double result_plus;
	double result_minus;
	double result, tmp;

	result_plus = (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
	result_minus = (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);

	if ( a == 0 ) {
		
		result = -c / b;
		
		return result;
	}

	if (pow(b, 2) - 4 * a * c < 0) {
		printf("실근은 존재하지 않습니다.\n");
		return 0;
	}

	else{
		if (result_plus > result_minus) {
	
			tmp = result_minus;
			result_minus = result_plus;
			result_plus = tmp;

			printf("%lf %lf\n", result_plus, result_minus);
			return 0;
		}

		if (result_plus == result_minus) {
			return result_plus;
		}
	}
}

int main() {
	double a, b, c;

	printf("a b c 값을 입력하세요.\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("%lf\n", Quadratic_eq(a, b, c));

	return 0;
}
*/

#include<stdio.h>

void swap(char * x, char * y) {
	
	char t;
	
	t = *x;
	*x = *y;
	*y = t;

}

int main() {
	char x = 'A', y = 'Z';

	swap(&x, &y);

	printf("%c %c \n", x, y);
	return 0;
}