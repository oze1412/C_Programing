#include<stdio.h>

int main_control(void)
{
	// 1. if������ �ִ� ���ϱ�

	/*int nMax, nInput;
	
	scanf_s("%d", &nMax);
	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &nInput);
		if (nInput > nMax)
			nMax = nInput;
	}

	printf("Max : %d\n", nMax);*/


	// 2. ������� ��� ���α׷�

	/*int nAge;
	int base_fare = 1000;
	scanf_s("%d", &nAge);
	if (nAge < 20)
		base_fare = base_fare * 75 / 100;

	printf("������� : %d��", base_fare);*/


	// 3. ���̿� ���� �з� �� ��ݰ��

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

	printf("������� : %d\n", (int)(base_fare * nRate));*/


	// 4. Stack

	/*int nInput = 0; // 1�� : nInput Stack { 0 }
	scanf_s("%d", &nInput); // 1���� nInput(ex. 11) ���� : nInput Stack { 11 }

	if (nInput > 10)
	{
		int nInput = 20; // 2�� : nInput Stack { 11, 20 }
		printf("%d\n", nInput); // 2��(stack : 20) ���

		if (nInput <= 20)
		{
			int nInput = 30; // 3�� : nInput Stack { 11, 20, 30 }
			printf("%d\n", nInput); // 30 ���
		} // 3��(stack : 30) ����

		printf("%d\n", nInput); // 2��(stack : 20) ���
	} // 2��(stack : 20) ����

	printf("%d\n", nInput); // 1��(stack : 11) ���
	
	// return 0; ���� 1��(stack : 11) ����*/


	// 5. �ܰ� �з��� ���� ���� ��� ��� - 1

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
		
	printf("������� : %d", base_fare);*/

	// �ܰ� �з��� ���� ���� ��� ��� - 2

	/*int base_fare = 1000, nAge;
	double nRate;

	scanf_s("%d", &nAge);

	if (nAge < 4)		nRate = 0;
	else if (nAge < 14)	nRate = 0.5;
	else if (nAge < 20)	nRate = 0.75;
	else if (nAge < 65)	nRate = 1;
	else				nRate = 0;

	printf("������� : %d��\n", (int)(base_fare * nRate));*/


	// 6. ���� if �� switch-case
	
	/*int nInput, nData;
	scanf_s("%d", &nInput);

	// ���� if -> �Ʒ��� �������鼭 ��, false�� �������� jump
	if (nInput == 90)
		nData = 10;
	else if (nInput == 50)
		nData = 5;
	else if (nInput == 10)
		nData = 1;
	else
		nData = 0;

	// switch-case -> �Ʒ��� �������鼭 ��, true�� �ش� ��ġ�� jump
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

	// ��� : ���� ���� -> �� �� ���� ���� ����

	printf("%d", nData);*/

	
	// 7. goto(�ݺ��� ����) : ERROR(����ó��)�� ���� ����

	/*int nAge = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);

	if (nAge < 0)
		goto ERROR;

	printf("�����¿Ϸ�\n"); // ����ó����
	
	ERROR:					// ����ó�� �ڵ�(���� return 0; �Ʒ� ���)
		puts("ERROR!!");
		return -1;*/
	

	// 8. �������� 6-1
	
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

	// 8. �������� 6-1 (�ٸ�Ǯ��)

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