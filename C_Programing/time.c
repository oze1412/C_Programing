#include <stdio.h>
#include <time.h>

int main_time(void) 
{
    clock_t start, end;
    double result;
    int i, j;
    int sum = 0;

    start = clock(); //시간 측정 시작

	/*
    input the function
    */

    end = clock(); //시간 측정 끝
    result = (double)(end - start);
    printf("%f", result);
    return 0;
}
