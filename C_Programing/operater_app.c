#include<stdio.h>

int main(void)
{
	// sizeof();
	
	int aList[5] = { 0 };

	memset(aList, 0, sizeof(aList)); // 직접 코드 수정 필요 X
	memset(aList, 0, 20); // 직접 코드 수정 필요 O

	printf("%d\n", sizeof(aList));
	printf("%d\n", 20);


	// 관계 연산자

	printf("%d\n", 2147483647); // 2^31 - 1 -> 32비트 자료의 최댓값
	printf("%d\n", 2147483647 + 1); // -214748368 -> 자료범위를 초과

	printf("%f\n", 2147483600.0F); // 2147483648.000000 -> 부동소수점 오차
	printf("%f\n", 2147483648.0F); // 2147483648.000000
	printf("%d\n", 2147483600.0F == 2147483648.0F); // 1 (true)

	printf("%d\n", 3 == 2.5); // 3 -> double형으로 변환, 이형자료간 연산(-)가 일어나기 때문

	return 0;
}