#include<stdio.h>

int main_operator(void)
{
	// '=' -> Copy & Overwrite

	/*3 = 4; // ->error C2106 '=': ���� �ǿ����ڴ� l - value�̾�� �մϴ�.

	const int a = 10;
	a = 5; // -> error C2166 : l - value�� const ��ü�� �����մϴ�.*/
	 

	// ������ ������

	/*int a = 0;
	scanf_s("%d", &a); // -> 0 �����ϸ� ���ѷ���
	printf("%d", 7 / a);*/


	// �ǽ����� 4-1

	/*int a, b;
	printf("�� ������ �Է��ϼ���.: ");
	scanf_s("%d%d", &a, &b);

	printf("AVG : %.2f", (a + b) / 2.0);*/


	// �ǽ����� 4-2

	/*int second;

	printf("�ʸ� �Է��ϼ��� : ");
	scanf_s("%d", &second);
	printf("%d�ʴ� %02d�ð� %02d�� %02d���Դϴ�.", second, 
		second / 3600, // �ð�
		second % 3600 / 60, 
		// �� -> (second - (second / 3600) * 3600) / 60 == second % 3600 / 60
		second % 60); // ��*/


	// �⺻��� - ����

	/*int nInput = 0, nTotal = 0;

	// �ۼ� �ڵ�
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &nInput);
		nTotal += nInput;
	}

	printf("Total : %d\n", nTotal);*/


	// ��������ó��

	/*int nTotal; // nTotal == 143918 -> ������ ��

	nTotal += 1;
	nTotal += 2;
	nTotal += 3;
	// -> ����, nTotal�� �ʱ�ȭ �� ��*/

	
	// ��Ʈ������ - XOR ��ü �˰���
	
	/*int a = 10, b = 20;

	a ^= b;		// a : a^b,					b : b
	b ^= a;		// a : a^b,					b : (a^b)^b = a^0 = a
	a ^= b;		// a : a^(a^b) = 0^b = b,	b: a

	printf("a : %d, b : %d \n", a, b);*/


	// 1�� ����, 2�� ����

	printf("%d\n", 3);
	printf("%d\n", ~3 + 1); // ~x -> 1�� ����, (~x + 1) -> 2�� ����


	return 0;
}  