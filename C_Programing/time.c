#include <stdio.h>
#include <time.h>

int main_time(void) 
{
    clock_t start, end;
    double result;
    int i, j;
    int sum = 0;

    start = clock(); //�ð� ���� ����

	/*
    input the function
    */

    end = clock(); //�ð� ���� ��
    result = (double)(end - start);
    printf("%f", result);
    return 0;
}
