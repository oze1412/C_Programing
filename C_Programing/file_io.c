#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// file I/O

	FILE* fp;
	fopen_s(&fp, "Test.txt", "w");		// "w" -> ������ ����, �̹� �����ϸ� �����ϰ� ����
	fprintf(fp, "Hello File I/O\n");
	fclose(fp);

	system("Test.txt");

	FILE* con;
	fopen_s(&con, "CON", "w");
	fprintf(con, "Hello File I/O\n");
	fclose(con);

	return 0;
}