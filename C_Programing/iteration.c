#include<stdio.h>

int main(void)
{
	// while문 - 조건기반

	/*FILE* fp = stdin;
	int i = 0;
	while (i < 5)				// 1. 반복 계수기 변수 초기화
	// 조건 : 1 -> 무한루프		// 2. 조건식
	{
		printf("i = %d\n", i);	// 3. 계수기 증가 -> 반복 종료 조건 도달을 위해
		i++;
	}

	char ch;
	while ((ch = getchar()) != '\n')	
	{
		putchar(ch);
	}*/


	// 입력 숫자만큼 '*' 출력 (실습문제 7-1)

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


	// 5행 5열 사격형 출력

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


	// continue; -> 처음으로 돌아감

	/*int i;

	for (i = 0; i < 10; i++)
	{
		if (i > 4)
			continue;

		printf("%dth\n", i);

	}

	printf("End: i == %d\n", i);*/


	// break; -> 반복문 종료

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


	// 1~10 총합 구하기 (실습문제 7-3)

	/*int nSum = 0;
	int i = 0;

	while (i < 10)
	{
		nSum += i + 1; // -> nSum += ++i;
		i++;
	}

	printf("Total : %d\n", nSum);*/

	
	// 구구단 한 단만 출력하기 (실습문제 7-4)

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


	// 직각 삼각형 출력하기 (실습 7-5)

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; i >= j; j++)
		{
				putchar('*');
		}
		putchar('\n');
	}*/


	// 역 직각 삼각형 출력하기 (실습 7-6)

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j >= 0; j--)
		{
			j > i ? putchar(' ') : putchar('*');
		}
		putchar('\n');
	}*/


	// 피라미드 출력하기 (실습 7-7) - 1

	/*for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < 9; j++)
		{

			(j + 1) >= i && 10 - i >= (j + 1) ? putchar('*') : putchar(' ');
		}
		putchar('\n');
	}*/

	// 피라미드 출력하기 (실습 7-7) - 2

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++)
		{
			(i + j) >= 4 ? putchar('*') : putchar(' ');
		}
		putchar('\n');
	}*/


	// 연습문제 1
	
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
	

	// 연습문제 2
	
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

	// 연습문제 2 - 1

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++)
		{
			i + j >= 4 && (j + i) % 2 == 0 ? putchar('*') : putchar(' ');
		}
		putchar('\n');
	}*/


	// 연습문제 4 -> 오답
	
	/*int nInput;

	while (nInput < 0 || nInput >10)
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	}

	puts("End");*/

	// 정답 -> nInput의 초기화 x, 처음엔 조건 없이 실행
	
	int nInput;

	do
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	} while (nInput < 0 || nInput > 10);

	puts("End");

	return 0;
}