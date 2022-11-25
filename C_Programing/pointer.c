#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// void (*)(int)
//void TestFunc(int nParam)
//{
//	printf("TestFunc() : %d\n", nParam);
//}
//
//void ArrPrint(int* paList)
//{
//	for (int i = 0; i < 5; i++)
//		printf("%d ", paList[i]);
//
//	putchar('\n');
//}
//
//void PrintUser(char (*pUser)[12])
//{
//	for (int i = 0; i < 3; i++)
//		puts(pUser[i]);
//}
//
//void StaticPrint(void)
//{
//	static int nData = 10;		// ��������
//	printf("%d\n", nData++);
//}
//
//int GetLength(char* str)
//{
//	int i = 0, len = 0;
//
//	while (str[i] != '\0')
//	{
//		len++;
//		i++;
//	}
//
//	return len;
//}
//
//char* MyStrrev(char* str)
//{
//	int str_len = GetLength(str);
//	char* cpy_str = NULL;
//
//	cpy_str = (char*)malloc(str_len + 1);
//	strcpy_s(cpy_str, str_len + 1, str);
//
//	for (int i = 0; i < str_len; i++)
//		str[i] = cpy_str[str_len - 1 - i];
//
//	free(cpy_str);
//
//	return str;
//}


int main_Pointer(void)
{
	int aList[5] = { 40, 20, 50, 30, 10 };

	// ��������, ��������


	/*int nData = 300;			// ��������
	printf("%d\n", nData);

	int* pnData = &nData;		// ��������
	printf("%d\n", *pnData);

	*((int*)&nData) = 600;		// ��������
	printf("%d\n", nData);*/


	// �Լ� �̸� == �ּ�


	/*TestFunc(10);						// High Level
	((void(*)(int))(&TestFunc))(20);*/	// Low Level


	// ������ ����

	/*ArrPrint(aList);*/


	// �����Ϳ� �迭

	/*int* paList = aList;

	paList + 1;			// �����ּ� + ����(�ɼ�) -> ����ּ�
	*(paList + 1);		// int�� ������ ������

	*(paList + 1) = 5;	// paList[1] = 5;*/


	// &, *

	/*int* paList = aList;

	printf("%p\n", aList);
	printf("%p\n", aList + 1);
	printf("%p\n", &aList[1]);*/


	// ������ ����

	/*int* paList = aList + 1;

	paList[0] = 100;
	printf("%d\n", aList[1]);

	paList[-1] = 200;	// ������ ��� X, �������� (+, -) �� �����迭
	printf("%d\n", aList[0]);*/


	// ������ ���� �ݺ���

	/*int nTotal = 0;

	for (int i = 0; i < 5; i++)
		nTotal += aList[i];
	printf("%d\n", nTotal);


	int* pnData = aList;

	while (pnData < aList + 5)	// ���� �ڵ� X, �򰥸�
	{
		nTotal += *pnData;
		pnData++;
	}
	printf("%d\n", nTotal);*/


	// �޸� ���� �Ҵ�

	/*int* pList = NULL;
	pList = malloc(sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 10;
	pList[2] = 10;

	*(((char*)pList) + 12) = 'A';	// buffer-overflow �߻�, fd(���)����

	free(pList);*/


	// memset

	/*int* pList = NULL;
	pList = malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);

	free(pList);*/


	// �޸� ����

	/*char szSrcBuf[12] = {"Hello"};
	char szDstBuf[12] = { 0 };
	char* pszData = NULL;

	pszData = szSrcBuf;								// Shallow Copy

	memcpy(szDstBuf, szSrcBuf, sizeof(szDstBuf));*/	// Deep Copy


	// �޸� ��

	/*char szSrcBuf[12] = { "Hello" };
	char szDstBuf[12] = { 0 };
	char* pszData = NULL;

	memcpy(szDstBuf, szSrcBuf, sizeof(szDstBuf));

	if (memcmp(szSrcBuf, szDstBuf, sizeof(szSrcBuf)) == 0)
		puts("Same");
	else
		puts("Diff");*/


	// �ּ� - �ּ� == index

	/*char szBuffer[12] = { "I am a boy." };
	char* pszFound = strstr(szBuffer, "am");

	int nIndex = pszFound - szBuffer;*/		// index


	// ������ �迭�� ���� ������

	/*char aListUser[3][12] = {
		"ö��",
		"�浿",
		"����"
	};

	PrintUser(aListUser);*/


	// staic ��������

	/*StaticPrint();
	StaticPrint();
	StaticPrint();*/


	// �������� 11-2

	/*char strList[50] = { 0 };
	gets_s(strList, sizeof(strList));

	printf("%d\n", GetLength(strList));*/


	// �������� 11-4

	/*char revList[50] = { 0 };
	gets_s(revList, sizeof(revList));

	MyStrrev(revList);

	printf("%s\n", revList);*/


	// �������� 11-5 (1)

	/*char memo_story[50] = { 0 };
	char* memo_list = NULL, * tmp_plist = NULL;

	gets_s(memo_story, sizeof(memo_story));

	int len_1 = GetLength(memo_story);
	memo_list = (char*)malloc(len_1 + 1);

	strcpy_s(memo_list, len_1 + 1, memo_story);

	printf("%s\n", memo_list);

	gets_s(memo_story, sizeof(memo_story));

	int len_2 = GetLength(memo_story);
	int len_sum = len_1 + len_2;
	tmp_plist = (char*)realloc(memo_list, len_sum + 1);
	if (tmp_plist != NULL)
		memo_list = tmp_plist;

	strcpy_s(&memo_list[len_1], len_2 + 1, memo_story);

	printf("%s\n", memo_list);

	free(memo_list);*/


	// �������� 11-6
	
	/*char** str_list = NULL;
	int str_num = 0, str_len = 0, i = 0;
	
	printf("���ڿ� ���� : ");
	scanf_s("%d", &str_num);
	
	printf("���� �ִ� ���� : ");
	scanf_s("%d", &str_len);

	str_list = (char**)malloc(sizeof(char*) * str_num);		// malloc�� ũ��� "�ڷ��� * ����"

	for (i = 0; i < str_num; i++)
		str_list[i] = (char*)malloc(str_len + 1);

	for (i = 0; i < str_num; i++)
	{
		scanf_s("%s", str_list[i], str_len + 1);
		printf("%s\n", str_list[i]);
	}

	for (i = 0; i < str_num; i++)
		free(str_list[i]);
	free(str_list);*/


	// �η� 1

	/*int nData = 10;
	*(int*)&nData = 20;		// &nData �� stack �����̶�� ����
	printf("%d\n", nData);
	printf("%d\n", *(int*)&nData);*/


	// �ڷ��� - �η�2

	/*char szBuffer[12] = { "I am a girl." };
	int nData = 1835081801;
	puts(&nData);*/		// I am ���

	return 0;
}