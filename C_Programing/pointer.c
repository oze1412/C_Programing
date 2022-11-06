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

	// ��������, ��������

	
	/*int nData = 300;			// ��������
	printf("%d\n", nData);

	int* pnData = &nData;		// ��������
	printf("%d\n", *pnData);

	*((int*)&nData) = 600;		// ��������
	printf("%d\n", nData);*/


	// �Լ� �̸� == �ּ�

	
	/*TestFunc(10);						// High Level
	((void(*)(int))(&TestFunc))(20);*/	// Low Level


	// ������ ����

	/*ArrPrint(aList);*/


	// �����Ϳ� �迭

	/*int* paList = aList;

	paList + 1;			// �����ּ� + ����(�ɼ�) -> ����ּ�
	*(paList + 1);		// int�� ������ ������

	*(paList + 1) = 5;	// paList[1] = 5;*/


	// &, *

	/*int* paList = aList;

	printf("%p\n", aList);
	printf("%p\n", aList + 1);
	printf("%p\n", &aList[1]);*/


	// ������ ����

	/*int* paList = aList + 1;

	paList[0] = 100;
	printf("%d\n", aList[1]);

	paList[-1] = 200;	// ������ ��� X, �������� (+, -) �� �����迭
	printf("%d\n", aList[0]);*/


	// ������ ���� �ݺ���

	/*int nTotal = 0;

	for (int i = 0; i < 5; i++)
		nTotal += aList[i];
	printf("%d\n", nTotal);


	int* pnData = aList;

	while (pnData < aList + 5)	// ���� �ڵ� X, �򰥸�
	{
		nTotal += *pnData;
		pnData++;
	}
	printf("%d\n", nTotal);*/


	// �޸� ���� �Ҵ�

	/*int* pList = NULL;
	pList = malloc(sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 10;
	pList[2] = 10;

	*(((char*)pList) + 12) = 'A';	// buffer-overflow �߻�, fd(���)����

	free(pList);*/


	// memset

	/*int* pList = NULL;
	pList = malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);
	
	free(pList);*/

	
	// �޸� ����

	/*char szSrcBuf[12] = {"Hello"};
	char szDstBuf[12] = { 0 };
	char* pszData = NULL;

	pszData = szSrcBuf;								// Shallow Copy
	
	memcpy(szDstBuf, szSrcBuf, sizeof(szDstBuf));*/	// Deep Copy
	

	// �޸� ��

	/*char szSrcBuf[12] = { "Hello" };
	char szDstBuf[12] = { 0 };
	char* pszData = NULL;

	memcpy(szDstBuf, szSrcBuf, sizeof(szDstBuf));

	if (memcmp(szSrcBuf, szDstBuf, sizeof(szSrcBuf)) == 0)
		puts("Same");
	else
		puts("Diff");*/


	// �ּ� - �ּ� == index

	/*char szBuffer[12] = { "I am a boy." };
	char* pszFound = strstr(szBuffer, "am");

	int nIndex = pszFound - szBuffer;*/		// index

	
	// �ڷ��� - �η�

	/*char szBuffer[12] = { "I am a girl." };
	int nData = 1835081801;
	puts(&nData);*/		// I am ���

	return 0;
}