#include<stdio.h>

int main_IO(void)
{
	// gets
	/*char szName[12] = { "Hello" };
	gets_s(szName, sizeof(szName));
	puts(szName);*/

	// scanf
	FILE* fp = stdin; // buffer ������
	/*int nAge = 0;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d%*c", &nAge); // %*c = ���ڸ� �ҷ������� ������ X

	char szName[12];
	printf("�̸��� �Է��ϼ���: ");
	gets_s(szName, sizeof(szName));

	printf("���� : %d, �̸� : %s\n", nAge, szName);*/

	// �Ϲ� �ڷ����� �ּ� -> &������
	// �迭 �ڷ����� �ּ� -> ������

	// 1��
	/*char test;
	printf("�Է�. : ");
	getchar();
	test = getchar();
	putchar(test);*/

	// 7��
	float a = 123.4567;
	printf("%012.3f", a);

	return 0;
}