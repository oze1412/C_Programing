#include <stdio.h>

//#pragma pack(push, 1)		: 구조체 1바이트단위로 변경

//typedef struct USERDATA
//{
//	unsigned int nHeight;
//	char szName[12];
//	char szPhone[12];
//	unsigned char sex;
//
//	struct  USERDATA* pNext;
//} USERDATA;
//
//typedef struct nDATA
//{
//	char ch;
//	int nData;
//}nDATA;
//
//typedef union _IP_ADDR
//{
//	int nAddress;
//	short awData[2];
//	unsigned char addr[4];
//}IP_ADDR;

//#pragma pack(pop)

int main_struct(void)
{
	// struct

	/*USERDATA a;
	a.nHeight = 180;
	strcpy_s(a.szName, sizeof(a.szName), "SeongGeun");
	strcpy_s(a.szPhone, sizeof(a.szPhone), "123-1234");
	a.sex = 'M';

	char buffer[sizeof(USERDATA)];
	USERDATA* pData = (USERDATA*)buffer;
	pData->nHeight = 180;
	strcpy_s(pData->szName, sizeof(pData->szName), "HoSung");
	strcpy_s(pData->szPhone, sizeof(pData->szPhone), "123-1234");
	pData->sex = 'M';

	a.pNext = pData;
	printf("%s\n", a.pNext->szName);*/


	// 구조체 멤버 삽입

	/*nDATA b;
	b.ch = 'A';
	b.nData = 300;

	printf("%d\n", sizeof(nDATA));*/


	// union

	/*IP_ADDR addr;
	addr.addr[0] = 192;
	addr.addr[1] = 168;
	addr.addr[2] = 0;
	addr.addr[3] = 10;
	printf("%d\n", addr.nAddress);*/

	return 0;
}