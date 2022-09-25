#include<stdio.h>

int main_operator(void)
{
	// '=' -> Copy & Overwrite

	/*3 = 4; // ->error C2106 '=': 왼쪽 피연산자는 l - value이어야 합니다.

	const int a = 10;
	a = 5; // -> error C2166 : l - value가 const 개체를 지정합니다.*/
	 

	// 나눗셈 연산자

	/*int a = 0;
	scanf_s("%d", &a); // -> 0 대입하면 무한루프
	printf("%d", 7 / a);*/


	// 실습문제 4-1

	/*int a, b;
	printf("두 정수를 입력하세요.: ");
	scanf_s("%d%d", &a, &b);

	printf("AVG : %.2f", (a + b) / 2.0);*/


	// 실습문제 4-2

	/*int second;

	printf("초를 입력하세요 : ");
	scanf_s("%d", &second);
	printf("%d초는 %02d시간 %02d분 %02d초입니다.", second, 
		second / 3600, // 시간
		second % 3600 / 60, 
		// 분 -> (second - (second / 3600) * 3600) / 60 == second % 3600 / 60
		second % 60); // 초*/


	// 기본요소 - 누적

	/*int nInput = 0, nTotal = 0;

	// 작성 코드
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &nInput);
		nTotal += nInput;
	}

	printf("Total : %d\n", nTotal);*/


	// 누적연산처리

	/*int nTotal; // nTotal == 143918 -> 쓰레기 값

	nTotal += 1;
	nTotal += 2;
	nTotal += 3;
	// -> 오류, nTotal을 초기화 안 함*/

	
	// 비트연산자 - XOR 교체 알고리즘
	
	/*int a = 10, b = 20;

	a ^= b;		// a : a^b,					b : b
	b ^= a;		// a : a^b,					b : (a^b)^b = a^0 = a
	a ^= b;		// a : a^(a^b) = 0^b = b,	b: a

	printf("a : %d, b : %d \n", a, b);*/


	// 1의 보수, 2의 보수

	printf("%d\n", 3);
	printf("%d\n", ~3 + 1); // ~x -> 1의 보수, (~x + 1) -> 2의 보수


	return 0;
}  