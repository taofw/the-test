/*************************************************************************
	> File Name: 2.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2021年03月03日 星期三 20时24分34秒
 ************************************************************************/

#include<stdio.h>

int front(int n)
{
	int sum=0;
	switch(n)
	{
		default:sum+=90;
		case 9:sum+=80;
		case 8:sum+=70;
		case 7:sum+=60;
		case 6:sum+=50;
		case 5:sum+=40;
		case 4:sum+=30;
		case 3:sum+=20;
		case 2:sum+=10;
		case 1:sum+=5;
		case 0:sum+=0;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	double sum=0;
	switch(n/10)
	{
		default:sum+=(n-100)*10+front(n/10);break;
		case 9:sum+=(n-90)*9+front(n/10);break;
		case 8:sum+=(n-80)*8+front(n/10);break;
		case 7:sum+=(n-70)*7+front(n/10);break;
		case 6:sum+=(n-60)*6+front(n/10);break;
		case 5:sum+=(n-50)*5+front(n/10);break;
		case 4:sum+=(n-40)*4+front(n/10);break;
		case 3:sum+=(n-30)*3+front(n/10);break;
		case 2:sum+=(n-20)*2+front(n/10);break;
		case 1:sum+=(n-10)*1+front(n/10);break;
		case 0:sum+=10*0.5+front(n/10);break;
	}
	printf("sum = %.2f\n",sum);
}
