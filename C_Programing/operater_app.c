#include<stdio.h>

int main_operater_app(void)
{
	// sizeof();
	
	int aList[5] = { 0 };

	memset(aList, 0, sizeof(aList)); // ���� �ڵ� ���� �ʿ� X
	memset(aList, 0, 20); // ���� �ڵ� ���� �ʿ� O

	printf("%d\n", sizeof(aList));
	printf("%d\n", 20);


	// ���� ������

	printf("%d\n", 2147483647); // 2^31 - 1 -> 32��Ʈ �ڷ��� �ִ�
	printf("%d\n", 2147483647 + 1); // -214748368 -> �ڷ������ �ʰ�

	printf("%f\n", 2147483600.0F); // 2147483648.000000 -> �ε��Ҽ��� ����
	printf("%f\n", 2147483648.0F); // 2147483648.000000
	printf("%d\n", 2147483600.0F == 2147483648.0F); // 1 (true)

	printf("%d\n", 3 == 2.5); // 3 -> double������ ��ȯ, �����ڷᰣ ����(-)�� �Ͼ�� ����


	// �պ��� �з�

	int pass = 0;

	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &pass);
	printf("��� : %s\n", pass >= 150 ? "�հ�" : "���հ�");


	// �ִ� ���ϱ�(��ʸ�Ʈ)

	/*int nMax = 0;
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);
	nMax = a > b ? a : b;
	nMax = nMax > c ? nMax : c;

	printf("%d", nMax);*/

	
	// �ִ� ���ϱ�(�����̹�)

	/*int nMax = -101, nInput = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &nInput);
		nMax = nInput > nMax ? nInput : nMax;
	}

	printf("MAX : %d\n", nMax);*/


	// ���� ������ ����ϴ� ����

	int nData = 0, nInput;
	scanf_s("%d", &nInput);

	if (nInput > 5)
		nData = 10;
	else
		nData = 0;
	printf("if�� : %d\n", nData);

	nInput > 5 ? (nData = 10) : (nData = 0);
	printf("���׿����� : %d", nData);

	return 0;
}