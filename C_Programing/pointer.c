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

	/*int aList[5] = { 40, 20, 50, 30, 10 };
	ArrPrint(aList);*/


	//



	return 0;
}