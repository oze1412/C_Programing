#include<stdio.h>


// �����ڵ� ��Ƽ����Ʈ ��ȯ

#ifdef _UNICODE
#define TCHAR	wchar_t
#else
#define TCHAR	char
#endif

//void Swap(int* pLeft, int* pRight)
//{
//	int nTmp = *pLeft;
//	*pLeft = *pRight;
//	*pRight = nTmp;
//}
//
//int* Never_Use(void)
//{
//	int nData = 10;
//	return &nData;
//}
//
//int Stack_Ex(int nParam)
//{
//	int nData = 10;
//	return nData;
//}
//
//void MyPrint(int nParam)
//{
//	nParam = 10;
//	return;
//}
//
//void CallStack(int nParam)
//{
//	MyPrint(5);
//}
//
//int GetFactorial(int nParam)
//{
//	int nResult = 0;
//
//	if (nParam == 1)		return 1;
//
//	nResult = nParam * GetFactorial(nParam - 1);
//
//	return nResult;
//}

int main_func_app(void)
{
	// Call by reference

	/*int a = 10, b = 20;
	Swap(&a, &b);

	printf("%d, %d\n", a, b);*/

	
	// ����� �޸𸮿� ���� �ּ� ��ȯ ���� X

	/*printf("%d\n", *Never_Use());*/	// printf ���� nData �ּ� �����


	// Stack

	/*int nResult;
	nResult = Stack_Ex(5);
	printf("%d\n", nResult);*/


	// CallStack

	/*CallStack(10);*/


	// ���ȣ��

	/*printf("5! == %d\n", GetFactorial(5));*/


	// Unicode

	/*wchar_t wcsBuffer[12] = { L"Hello" };
	TCHAR ch;
	printf("%d\n", sizeof(TCHAR));*/

	
	return 0;
}