#include<stdio.h>

// 1

/*int Add(int a, int b)		
{		
	int nResult;
	nResult = a + b;

	return nResult;
}*/		


// 2

/*int GetData(void)
{
	int a;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);

	return a;
}

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (nMax < b)	nMax = b;
	if (nMax < c)	nMax = c;

	return nMax;
}

void PrintData(int a, int b, int c, int nMax)
{
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.", a, b, c, nMax);
}*/


// 3

/*int Add(int, int);*/		// 원형선언 -> 헤더 파일 (~~.h , 덩어리)


// 4

/*int g_nData = 0;
int Add(int, int);*/


// 5

/*int GetMin(int a, int b, int c, int d)
{
	int nMin = a;
	if (nMin > b)	nMin = b;
	if (nMin > c)	nMin = c;
	if (nMin > d)	nMin = d;

	return nMin;
}*/


// 6

/*int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;

	if (nParam < 1 || nParam >10)	return 0;

	for (i = 1; i <= nParam; i++)
		nResult *= i;

	return nResult;
}

void PrintData(int factor)
{
	factor = GetFactorial(factor);

	if (factor == 0)	puts("ERROR : 1 ~ 10 사이의 정수를 입력하세요.");
	else				printf("MAX : %d\n", factor);
}*/


// 7

/*int GetFee(int nAge, int base_fee)
{
	double fee_rate = 0;

	if (nAge >= 0 && nAge <= 3)		fee_rate = 0;
	else if (nAge >= 4 && nAge <= 13)	fee_rate = 0.5;
	else if (nAge >= 14 && nAge <= 19)	fee_rate = 0.75;
	else if (nAge >= 20)	fee_rate = 1;
	
	return base_fee * fee_rate;
}*/


// 8

//int nInput = 100;
//
//int TestFunc(void)
//{
//	printf("%d\n", nInput);
//}



int main_function_base(void)
{
	// 1. 함수

	/*int nResult = 0;
	nResult = Add(3, 4);
	printf("%d\n", nResult);

	nResult = Add(6, 7);
	printf("%d\n", nResult);*/


	// 2. 코드 분할 (실습 10-1)

	/*int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	
	for (i = 0; i < 3; i++)
		aList[i] = GetData();

	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);*/


	// 3. 원형선언, 정의

	/*int nResult = 0;
	nResult = Add(3, 4);
	printf("%d\n", nResult);*/


	// 4. 전역변수

	/*Add(0, 0);
	Add2(0, 0);
	printf("%d\n", g_nData);*/

	
	// 5. 연습문제 10-1

	/*printf("MIN : %d", GetMin(2, 1, 4 ,3));*/


	// 6. 연습문제 10-2

	/*PrintData(1);
	PrintData(5);
	PrintData(11);
	PrintData(10);*/


	// 7. 연습문제 10-3

	/*printf("%d", GetFee(10, 1000));*/


	// 8. 연습문제 10-5

	int nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput > 10)
	{
		int nInput = 20;
		printf("%d\n", nInput);

		TestFunc();

		if (nInput >= 100)
			printf("%d\n", nInput);
	}

	printf("%d\n", nInput);

	return 0;
}

// 3

/*int Add(int a, int b)		// 정의 -> ~~.c (덩어리)
{
	int nResult;
	nResult = a + b;

	return nResult;
}*/


// 4

/*int Add(int a, int b)
{
	int nResult;
	nResult = a + b;

	g_nData = 100;

	return nResult;
}

int Add2(int a, int b)
{
	int g_nData;

	int nResult;
	nResult = a + b;

	g_nData = 200;

	return nResult;
}*/