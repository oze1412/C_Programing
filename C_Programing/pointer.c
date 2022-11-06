#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

	/*int nTotal = 0;

	for (int i = 0; i < 5; i++)
		nTotal += aList[i];
	printf("%d\n", nTotal);


	int* pnData = aList;

	while (pnData < aList + 5)	// 좋은 코드 X, 헷갈림
	{
		nTotal += *pnData;
		pnData++;
	}
	printf("%d\n", nTotal);*/


	// 메모리 동적 할당

	/*int* pList = NULL;
	pList = malloc(sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 10;
	pList[2] = 10;

	*(((char*)pList) + 12) = 'A';	// buffer-overflow 발생, fd(경계)깨짐

	free(pList);*/


	// memset

	/*int* pList = NULL;
	pList = malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);
	
	free(pList);*/

	
	// 메모리 복사

	/*char szSrcBuf[12] = {"Hello"};
	char szDstBuf[12] = { 0 };
	char* pszData = NULL;

	pszData = szSrcBuf;								// Shallow Copy
	
	memcpy(szDstBuf, szSrcBuf, sizeof(szDstBuf));*/	// Deep Copy
	

	// 메모리 비교

	/*char szSrcBuf[12] = { "Hello" };
	char szDstBuf[12] = { 0 };
	char* pszData = NULL;

	memcpy(szDstBuf, szSrcBuf, sizeof(szDstBuf));

	if (memcmp(szSrcBuf, szDstBuf, sizeof(szSrcBuf)) == 0)
		puts("Same");
	else
		puts("Diff");*/


	// 주소 - 주소 == index

	/*char szBuffer[12] = { "I am a boy." };
	char* pszFound = strstr(szBuffer, "am");

	int nIndex = pszFound - szBuffer;*/		// index

	
	// 자료형 - 부록

	/*char szBuffer[12] = { "I am a girl." };
	int nData = 1835081801;
	puts(&nData);*/		// I am 출력

	return 0;
}