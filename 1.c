/*************************************************************************
	> File Name: 1.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2021年03月03日 星期三 17时51分24秒
 ************************************************************************/

#include<stdio.h>
/*
#define sub_abs(x,y) ((x)>(y)?(x)-(y):(y)-(x))
int main()
{
#ifdef sub_abs
#pragma message("data")
#else
	printf("2222\n");
#endif
	int x=-4;
	int y=-9;
	printf("%d\n",sub_abs(x,y));
}*/

#pragma pack(1)

struct 
{
	int a;
	char c;
	char b;
}an;

int main()
{
	printf("%d\n",sizeof(an));
}
