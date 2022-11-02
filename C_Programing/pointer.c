#include<stdio.h>

// void (*)(int)
void TestFunc(int nParam)
{
	printf("TestFunc() : %d\n", nParam);
}

void ArrPrint(int* paList)
{
	for (int i = 0; i < 5; i++)
		printf("%d ", paList[i]);

	putchar('\n');
}

int main(void)
{
	int aList[5] = { 40, 20, 50, 30, 10 };

	// 직접지정, 간접지정

	
	/*int nData = 300;			// 직접지정
	printf("%d\n", nData);

	int* pnData = &nData;		// 간접지정
	printf("%d\n", *pnData);

	*((int*)&nData) = 600;		// 직접지정
	printf("%d\n", nData);*/


	// 함수 이름 == 주소

	
	/*TestFunc(10);						// High Level
	((void(*)(int))(&TestFunc))(20);*/	// Low Level


	// 포인터 사용법

	/*ArrPrint(aList);*/


	// 포인터와 배열

	/*int* paList = aList;

	paList + 1;			// 기준주소 + 정수(옵셋) -> 상대주소
	*(paList + 1);		// int형 변수가 지정됨

	*(paList + 1) = 5;	// paList[1] = 5;*/


	// &, *

	/*int* paList = aList;

	printf("%p\n", aList);
	printf("%p\n", aList + 1);
	printf("%p\n", &aList[1]);*/


	// 기준점 변경

	/*int* paList = aList + 1;

	paList[0] = 100;
	printf("%d\n", aList[1]);

	paList[-1] = 200;	// 가급적 사용 X, 포인터의 (+, -) 는 정수계열
	printf("%d\n", aList[0]);*/


	// 포인터 변수 반복문

	int nTotal = 0;

	for (int i = 0; i < 5; i++)
		nTotal += aList[i];
	printf("%d\n", nTotal);


	int* pnData = aList;

	while (pnData < aList + 5)	// 좋은 코드 X, 헷갈림
	{
		nTotal += *pnData;
		pnData++;
	}
	printf("%d\n", nTotal);



	return 0;
}