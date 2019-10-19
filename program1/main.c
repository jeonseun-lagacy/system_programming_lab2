#include "arithmeticlib.h"
#include <stdio.h>

int main()
{
	int a, b;
	printf("두 정수 입력 : ");
	scanf("%d %d",&a, &b);
	printf("덧셈 결과 %d\n",add(a,b));
	printf("뺄셈 결과 %d\n", subtract(a, b));
	printf("나눗셈 결과 %d\n", divide(a, b));
	printf("곱셈 결과 %d\n", multiply(a, b));
	return 0;
}
