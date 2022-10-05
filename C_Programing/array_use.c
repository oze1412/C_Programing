#include<stdio.h>

int main(void)
{
	// 선택정렬로 알려진 버블정렬 구현 (실습 9-1)

	/*int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < 4; i++)
		for (j = i + 1; j < 5; j++)
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}

	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);*/


	// 버블정렬 구현 (실습 9-2)

	/*int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	for (i = 4; i > 0; i--)
		for (j = 0; j < i; j++)
			if (aList[j] > aList[j + 1])
			{
				nTmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = nTmp;
			}

	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);*/


	// 선택정렬 구현 (실습 9-3)

	/*int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0, nMinIndex;

	for (i = 0; i < 5; i++)
	{
		nMinIndex = i;
		for (j = i + 1; j < 5; j++)
			if (aList[nMinIndex] > aList[j])
			{
				nMinIndex = j;
			}
		
		if (nMinIndex != i)
		{
			nTmp = aList[nMinIndex];
			aList[nMinIndex] = aList[i];
			aList[i] = nTmp;
		}
	}

	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);*/


	// 지그재그 2차원 배열 채우기 (기본요소 1)

	/*int aList[5][5] = { 0 };
	int i = 0, j = 0, nCount = 1;

	for (i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < 5; j++)
			{
				aList[i][j] += nCount;
				nCount++;
			}
		}
		else
		{
			for (j = 0; j < 5; j++)
			{
				aList[i][4 - j] += nCount;
				nCount++;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%2d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 달팽이 배열 채우기 (실습 9-4) - 1

	/*int aList[5][5] = {0};
	int i = 0, j = 0, nCount = 1, nType = 0, maxCount = 0;

	while (nCount <= 25)
	{
		if (nType == 0)
		{
			if (j == 5 || aList[i][j] != 0)
			{
				nType = 1;
				j--;
				i++;
			}
			else
			{
				aList[i][j] += nCount;
				j++;
			}
		}

		if (nType == 1)
		{
			if (i == 5 || aList[i][j] != 0)
			{
				nType = 2;
				j--;
				i--;
			}
			else
			{
				aList[i][j] += nCount;
				i++;
			}
		}

		if (nType == 2)
		{
			if (j == -1 || aList[i][j] != 0)
			{
				nType = 3;
				j++;
				i--;
			}
			else
			{
				aList[i][j] += nCount;
				j--;
			}
		}

		if (nType == 3)
		{
			if (i == -1 || aList[i][j] != 0)
			{
				nType = 0;
				j++;
				i++;
				nCount--;
			}
			else
			{
				aList[i][j] += nCount;
				i--;
			}
		}

		nCount++;

	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%2d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 달팽이 배열 채우기 (실습 9-4) - 2

	/*int aList[5][5] = { 0 };
	int x = -1, y = 0, nCount = 0, nDirection = 1, nLength = 9;
	int i = 0, j = 0;

	for (nLength = 9; nLength > 0; nLength -= 2)
	{
		for (i = 0; i < nLength; i++)
		{
			if (i < (nLength / 2 + 1))	x += nDirection;
			else						y += nDirection;

			aList[y][x] = ++nCount;
		}

		nDirection = -nDirection;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%2d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 연습문제 9-1

	/*int aList[5][5] = { 0 };
	int i = 0, j = 0, nCount = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			aList[j][i] = ++nCount;
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%2d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 연습문제 9-2

	int aList[5][5] = { 0 };
	int x = 5, y = 0, nCount = 0, nDirection = 1, nLength = 9;
	int i = 0, j = 0;

	for (nLength = 9; nLength > 0; nLength -= 2)
	{
		for (i = 0; i < nLength; i++)
		{
			if (i < (nLength / 2 + 1))	x -= nDirection;
			else						y += nDirection;

			aList[y][x] = ++nCount;
		}

		nDirection = -nDirection;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%2d\t", aList[i][j]);
		putchar('\n');
	}

	return 0;

}