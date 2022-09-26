#include<stdio.h>

int main(void)
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

	return 0;
}