#include<stdio.h>

int main(void)
{
	// if문으로 최댓값 구하기

	/*int nMax, nInput;
	
	scanf_s("%d", &nMax);
	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &nInput);
		if (nInput > nMax)
			nMax = nInput;
	}

	printf("Max : %d\n", nMax);*/


	// 버스요금 계산 프로그램

	/*int nAge;
	int base_fare = 1000;
	scanf_s("%d", &nAge);
	if (nAge < 20)
		base_fare = base_fare * 75 / 100;

	printf("최종요금 : %d원", base_fare);*/


	// 나이에 따른 분류 및 요금계산

	/*int base_fare = 1000, nAge;
	double nRate;
	scanf_s("%d", &nAge);

	if (nAge < 14)
	{

	if (nAge < 4)	nRate = 0;
		else			nRate = 0.5;
	}
	else
	{
		if (nAge < 20)	nRate = 0.75;
		else			nRate = 1;
	}

	printf("최종요금 : %d\n", (int)(base_fare * nRate));*/


	// 단계 분류에 따른 버스 요금 계산 1

	/*int base_fare = 1000;
	int nAge;
	scanf_s("%d", &nAge);

	if (4 <= nAge && nAge < 14)
		base_fare /= 2;
	else if (14 <= nAge && nAge < 20)
		base_fare = base_fare * 75 / 100;
	else if (20 <= nAge && nAge < 65)
		base_fare *= 1;
	else
		base_fare *= 0;
		
	printf("최종요금 : %d", base_fare);*/

	// 단계 분류에 따른 버스 요금 계산 2

	/*int base_fare = 1000, nAge;
	double nRate;

	scanf_s("%d", &nAge);

	if (nAge < 4)		nRate = 0;
	else if (nAge < 14)	nRate = 0.5;
	else if (nAge < 20)	nRate = 0.75;
	else if (nAge < 65)	nRate = 1;
	else				nRate = 0;

	printf("최종요금 : %d원\n", (int)(base_fare * nRate));*/


	return 0;
} 