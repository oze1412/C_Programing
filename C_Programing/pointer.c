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

	/*int aList[5] = { 40, 20, 50, 30, 10 };
	ArrPrint(aList);*/


	//



	return 0;
}