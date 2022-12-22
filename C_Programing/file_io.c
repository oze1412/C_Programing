#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// file I/O

	FILE* fp;
	fopen_s(&fp, "Test.txt", "w");		// "w" -> 무조건 생성, 이미 존재하면 삭제하고 생성
	fprintf(fp, "Hello File I/O\n");
	fclose(fp);

	system("Test.txt");

	FILE* con;
	fopen_s(&con, "CON", "w");
	fprintf(con, "Hello File I/O\n");
	fclose(con);

	return 0;
}