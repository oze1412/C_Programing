#include<stdio.h>

int main(void)
{
	// while�� - ���Ǳ��

	/*FILE* fp = stdin;
	int i = 0;
	while (i < 5)				// 1. �ݺ� ����� ���� �ʱ�ȭ
	// ���� : 1 -> ���ѷ���		// 2. ���ǽ�
	{
		printf("i = %d\n", i);	// 3. ����� ���� -> �ݺ� ���� ���� ������ ����
		i++;
	}

	char ch;
	while ((ch = getchar()) != '\n')	
	{
		putchar(ch);
	}*/


	// �Է� ���ڸ�ŭ '*' ��� (�ǽ����� 7-1)

	/*int num;
	char star = '*';

	scanf_s("%d", &num);
	if (num > 9)
	{
		num = 9;
	}
	else if (num < 1)
	{
		num = 1;
	}

	while (num > 0)
	{
		printf("%c", star); // putchar('*');
		num--;
	}

	putchar('\n');*/


	// 5�� 5�� ����� ���

	/*int i = 0, j = 0;

	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			printf('*\t');
			j++;
		}

		putchar('\n');
		i++;
	}*/


	// continue; -> ó������ ���ư�

	/*int i;

	for (i = 0; i < 10; i++)
	{
		if (i > 4)
			continue;

		printf("%dth\n", i);

	}

	printf("End: i == %d\n", i);*/


	// break; -> �ݺ��� ����

	/*int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		printf("i == %d\n", i);
		for (j = 0; j < 5; j++)
		{
			if (j > 2)
				break;
			printf("\t%dth\n", j);
		}
		printf("END\n\n");
	}*/


	// 1~10 ���� ���ϱ� (�ǽ����� 7-3)

	/*int nSum = 0;
	int i = 0;

	while (i < 10)
	{
		nSum += i + 1; // -> nSum += ++i;
		i++;
	}

	printf("Total : %d\n", nSum);*/

	
	// ������ �� �ܸ� ����ϱ� (�ǽ����� 7-4)

	/*int nInput;
	scanf_s("%d", &nInput);

	if (nInput < 2 || nInput > 9)	puts("ERROR!!");
	else
	{
		int i = 1;
		int times;

		while (i < 10)
		{
			times = nInput * i;
			printf("%d * %d = %d\n", nInput, i, times);
			i++;
		}
	}*/


	// ���� �ﰢ�� ����ϱ� (�ǽ� 7-5)

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; i >= j; j++)
		{
				putchar('*');
		}
		putchar('\n');
	}*/


	// �� ���� �ﰢ�� ����ϱ� (�ǽ� 7-6)

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j >= 0; j--)
		{
			j > i ? putchar(' ') : putchar('*');
		}
		putchar('\n');
	}*/


	// �Ƕ�̵� ����ϱ� (�ǽ� 7-7) - 1

	/*for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < 9; j++)
		{

			(j + 1) >= i && 10 - i >= (j + 1) ? putchar('*') : putchar(' ');
		}
		putchar('\n');
	}*/

	// �Ƕ�̵� ����ϱ� (�ǽ� 7-7) - 2

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++)
		{
			(i + j) >= 4 ? putchar('*') : putchar(' ');
		}
		putchar('\n');
	}*/


	// �������� 1
	
	/*int nCount = 0, sum_four = 0, i = 1;
	
	while (i < 101)
	{
		if (i % 4 == 0)
		{
			nCount++;
			sum_four += i;
		}
		i++;
	}

	printf("Count : %d, Sum : %d", nCount, sum_four);*/
	

	// �������� 2
	
	/*for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 5 + i; j++)
			{
				i + j >= 4 && j % 2 == 0 ? putchar('*') : putchar(' ');
			}
		}
		else
		{
			for (int j = 0; j < 5 + i; j++)
			{
				i + j >= 4 && j % 2 ? putchar('*') : putchar(' ');
			}
		}
		putchar('\n');
	}*/

	// �������� 2 - 1

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++)
		{
			i + j >= 4 && (j + i) % 2 == 0 ? putchar('*') : putchar(' ');
		}
		putchar('\n');
	}*/


	// �������� 4 -> ����
	
	/*int nInput;

	while (nInput < 0 || nInput >10)
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	}

	puts("End");*/

	// ���� -> nInput�� �ʱ�ȭ x, ó���� ���� ���� ����
	
	int nInput;

	do
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	} while (nInput < 0 || nInput > 10);

	puts("End");

	return 0;
}