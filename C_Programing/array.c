#include<stdio.h>

int main_array(void)
{
	// 1. int aList[5] -> �ڷ��� : int[5], �ĺ��� : aList

	/*printf("%d\n", sizeof(int[5]));

	int aList[5];
	printf("%d\n", sizeof(aList));*/


	// 2. �迭�� �ĺ���(�̸�) == �ּ�

	/*int aList[3];

	aList[0] = 10;
	aList[1] = 20;
	aList[2] = 30;*/


	// 3. �迭�� ���� �� ������

	/*int aList[3] = { 0 };

	int* pData = aList;*/ // != &aList (?) 

	
	// 4. int aList[3][4] == int aList[12] == int aList[0][12]

	/*int aList[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int nTotal = 0;
	//int* pList = (int*)aList;
	
	for (int i = 0; i < 12; i++)
		//nTotal += ((int*)aList)[i];
		nTotal += aList[0][i];

	printf("%d\n", nTotal);*/


	// 5. �迭 �ִ� ���ϱ� (�ǽ� 8-1)

	/*int aList[5] = { 30,40,10,50,20 };
	int i = 0;

	for (i = 1; i < 5; i++)
		if (aList[0] < aList[i])
			aList[0] = aList[i];

	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MAX : %d\n", aList[0]);*/


	// 6. ��ȯ���� �ּڰ� ���ϱ� (�ǽ� 8-2)

	/*int aList[5] = { 30,40,10,50,20 };
	int i = 0, nTmp = 0;

	for (i = 1; i < 5; i++)
		if (aList[0] > aList[i])
		{
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[0] = nTmp;
		}

	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MIN : %d\n", aList[0]);*/


	// 7. 2���� �迭 ���� ��� (�ǽ� 8-3)

	/*int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			aList[i][3] += aList[i][j];
	
	for (i = 0; i < 4; i++)
		for (j = 0; j < 2; j++)
			aList[2][i] += aList[j][i];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", aList[i][j]);

		putchar('\n');
	}*/


	// 8. �������� 1

	/*int nInput[5] = { 0 };
	int i, min, max;

	for (i = 0; i < 5; i++)
		scanf_s("%d", &nInput[i]);

	min = max = nInput[0];

	for (i = 1; i < 5; i++)
	{
		if (min > nInput[i])		min = nInput[i];
		else if(max < nInput[i])	max = nInput[i];
	}

	printf("MIN : %d, MAX : %d", min, max);*/


	// 9. �������� 2

	char szLetter[128] = { 0 };
	int nLength = 0;
	gets_s(szLetter, sizeof(szLetter));

	while (szLetter[nLength] != '\0')
	{
		nLength++;
	}

	printf("�ѱ� ������ ������ %d�� �Դϴ�.", nLength/2);


	return 0;
}