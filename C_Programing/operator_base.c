#include<stdio.h>

int main(void)
{
	// 3 = 4; -> error C2106 '=': ���� �ǿ����ڴ� l-value�̾�� �մϴ�.

	// const int a = 10;
	// a = 5; -> error C2166 : l - value�� const ��ü�� �����մϴ�.
	// '=' -> Copy & Overwrite
	 
	/*int a = 0;
	scanf_s("%d", &a); // -> 0 �����ϸ� ���ѷ���
	printf("%d", 7 / a);*/

	// �ǽ����� 4-1
	/*int a, b;
	printf("�� ������ �Է��ϼ���.: ");
	scanf_s("%d%d", &a, &b);

	printf("AVG : %.2f", (a + b) / 2.0);*/

	// �ǽ����� 4-2
	int second;

	printf("�ʸ� �Է��ϼ��� : ");
	scanf_s("%d", &second);
	printf("%d�ʴ� %02d�ð� %02d�� %02d���Դϴ�.", second, 
		second / 3600, // �ð�
		second % 3600 / 60, 
		// �� -> (second - (second / 3600) * 3600) / 60 == second % 3600 / 60
		second % 60); // ��


	return 0;
}  