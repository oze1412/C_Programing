#include<stdio.h>

int main(void)
{
	// 3 = 4; -> error C2106 '=': 왼쪽 피연산자는 l-value이어야 합니다.

	// const int a = 10;
	// a = 5; -> error C2166 : l - value가 const 개체를 지정합니다.
	// '=' -> Copy & Overwrite
	 
	/*int a = 0;
	scanf_s("%d", &a); // -> 0 대입하면 무한루프
	printf("%d", 7 / a);*/

	// 실습문제 4-1
	/*int a, b;
	printf("두 정수를 입력하세요.: ");
	scanf_s("%d%d", &a, &b);

	printf("AVG : %.2f", (a + b) / 2.0);*/

	// 실습문제 4-2
	int second;

	printf("초를 입력하세요 : ");
	scanf_s("%d", &second);
	printf("%d초는 %02d시간 %02d분 %02d초입니다.", second, 
		second / 3600, // 시간
		second % 3600 / 60, 
		// 분 -> (second - (second / 3600) * 3600) / 60 == second % 3600 / 60
		second % 60); // 초


	return 0;
}  