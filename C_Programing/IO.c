#include<stdio.h>

int main_IO(void)
{
	// gets
	/*char szName[12] = { "Hello" };
	gets_s(szName, sizeof(szName));
	puts(szName);*/

	// scanf
	FILE* fp = stdin; // buffer 추적용
	/*int nAge = 0;
	printf("나이를 입력하세요: ");
	scanf_s("%d%*c", &nAge); // %*c = 문자를 불러오지만 저장은 X

	char szName[12];
	printf("이름을 입력하세요: ");
	gets_s(szName, sizeof(szName));

	printf("나이 : %d, 이름 : %s\n", nAge, szName);*/

	// 일반 자료형의 주소 -> &변수명
	// 배열 자료형의 주소 -> 변수명

	// 1번
	/*char test;
	printf("입력. : ");
	getchar();
	test = getchar();
	putchar(test);*/

	// 7번
	float a = 123.4567;
	printf("%012.3f", a);

	return 0;
}