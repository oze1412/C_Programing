#include<stdio.h>

int main_control(void)
{
	// 1. if문으로 최댓값 구하기

	/*int nMax, nInput;
	
	scanf_s("%d", &nMax);
	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &nInput);
		if (nInput > nMax)
			nMax = nInput;
	}

	printf("Max : %d\n", nMax);*/


	// 2. 버스요금 계산 프로그램

	/*int nAge;
	int base_fare = 1000;
	scanf_s("%d", &nAge);
	if (nAge < 20)
		base_fare = base_fare * 75 / 100;

	printf("최종요금 : %d원", base_fare);*/


	// 3. 나이에 따른 분류 및 요금계산

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


	// 4. Stack

	/*int nInput = 0; // 1번 : nInput Stack { 0 }
	scanf_s("%d", &nInput); // 1번에 nInput(ex. 11) 저장 : nInput Stack { 11 }

	if (nInput > 10)
	{
		int nInput = 20; // 2번 : nInput Stack { 11, 20 }
		printf("%d\n", nInput); // 2번(stack : 20) 출력

		if (nInput <= 20)
		{
			int nInput = 30; // 3번 : nInput Stack { 11, 20, 30 }
			printf("%d\n", nInput); // 30 출력
		} // 3번(stack : 30) 삭제

		printf("%d\n", nInput); // 2번(stack : 20) 출력
	} // 2번(stack : 20) 삭제

	printf("%d\n", nInput); // 1번(stack : 11) 출력
	
	// return 0; 에서 1번(stack : 11) 삭제*/


	// 5. 단계 분류에 따른 버스 요금 계산 - 1

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

	// 단계 분류에 따른 버스 요금 계산 - 2

	/*int base_fare = 1000, nAge;
	double nRate;

	scanf_s("%d", &nAge);

	if (nAge < 4)		nRate = 0;
	else if (nAge < 14)	nRate = 0.5;
	else if (nAge < 20)	nRate = 0.75;
	else if (nAge < 65)	nRate = 1;
	else				nRate = 0;

	printf("최종요금 : %d원\n", (int)(base_fare * nRate));*/


	// 6. 다중 if 와 switch-case
	
	/*int nInput, nData;
	scanf_s("%d", &nInput);

	// 다중 if -> 아래로 내려가면서 비교, false면 다음으로 jump
	if (nInput == 90)
		nData = 10;
	else if (nInput == 50)
		nData = 5;
	else if (nInput == 10)
		nData = 1;
	else
		nData = 0;

	// switch-case -> 아래로 내려가면서 비교, true면 해당 위치로 jump
	switch (nInput) 
	{
		case 90:
			nData = 10;
			break;

		case 50:
			nData = 5;
			break;

		case 10:
			nData = 1;
			break;

		default:
			nData = 0;
	}

	// 결론 : 차이 없음 -> 둘 다 성능 저하 요인

	printf("%d", nData);*/

	
	// 7. goto(반복문 성격) : ERROR(예외처리)에 자주 쓰임

	/*int nAge = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);

	if (nAge < 0)
		goto ERROR;

	printf("요금출력완료\n"); // 정상처리시
	
	ERROR:					// 예외처리 코드(보통 return 0; 아래 사용)
		puts("ERROR!!");
		return -1;*/
	

	// 8. 연습문제 6-1
	
	/*int nInput[5];

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &nInput[i]);
		if (nInput[i] < 0)
			nInput[i] = 0;
		else if (nInput[i] > 100)
			nInput[i] = 100;
	}
	for (int j = 0; j < 4; j++)
	{
		if (nInput[j] > nInput[j + 1])
		{
			nInput[j] ^= nInput[j + 1];
			nInput[j + 1] ^= nInput[j];
			nInput[j] ^= nInput[j + 1];
		}
	}
	
	printf("%d", nInput[4]);*/

	// 8. 연습문제 6-1 (다른풀이)

	int nInput, nMax = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &nInput);

		if (nInput > 100)
			nInput = 100;
		else if (nInput < 0)
			nInput = 0;

		if (nInput > nMax)
		{
			nMax = nInput;
		}
	}
	
	printf("%d", nMax);

	return 0;
} 