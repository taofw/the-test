/*************************************************************************
	> File Name: 3.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2021年03月04日 星期四 09时13分57秒
 ************************************************************************/

#include<stdio.h>

#define print(x,y) printf(""#x" x "#y" = %d\n",x*y);

int main()
{
	int sum=1;
	int n=10;
	do
	{
		sum*=n;
	}while(n-->1);
	printf("10! = %d\n",sum);
}
