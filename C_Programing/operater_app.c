#include<stdio.h>

int main_operater_app(void)
{
	// sizeof();
	
	int aList[5] = { 0 };

	memset(aList, 0, sizeof(aList)); // 직접 코드 수정 필요 X
	memset(aList, 0, 20); // 직접 코드 수정 필요 O

	printf("%d\n", sizeof(aList));
	printf("%d\n", 20);


	// 관계 연산자

	printf("%d\n", 2147483647); // 2^31 - 1 -> 32비트 자료의 최댓값
	printf("%d\n", 2147483647 + 1); // -214748368 -> 자료범위를 초과

	printf("%f\n", 2147483600.0F); // 2147483648.000000 -> 부동소수점 오차
	printf("%f\n", 2147483648.0F); // 2147483648.000000
	printf("%d\n", 2147483600.0F == 2147483648.0F); // 1 (true)

	printf("%d\n", 3 == 2.5); // 3 -> double형으로 변환, 이형자료간 연산(-)가 일어나기 때문


	// 합불합 분류

	int pass = 0;

	printf("키를 입력하세요 : ");
	scanf_s("%d", &pass);
	printf("결과 : %s\n", pass >= 150 ? "합격" : "불합격");


	// 최댓값 구하기(토너먼트)

	/*int nMax = 0;
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);
	nMax = a > b ? a : b;
	nMax = nMax > c ? nMax : c;

	printf("%d", nMax);*/

	
	// 최댓값 구하기(서바이벌)

	/*int nMax = -101, nInput = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &nInput);
		nMax = nInput > nMax ? nInput : nMax;
	}

	printf("MAX : %d\n", nMax);*/


	// 삼항 연산자 사용하는 이유

	int nData = 0, nInput;
	scanf_s("%d", &nInput);

	if (nInput > 5)
		nData = 10;
	else
		nData = 0;
	printf("if문 : %d\n", nData);

	nInput > 5 ? (nData = 10) : (nData = 0);
	printf("삼항연산자 : %d", nData);

	return 0;
}