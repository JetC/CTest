
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[])
{
	float a,b,c,d,e,tmp;
	int max(int a,int b);
	int min(int a,int b);	//在main函数中要声明其他函数
	printf("Please input a:");
		scanf("%f",&a);
	printf("Please input b:");
		scanf("%f",&b);
	c=max(a,b);				//c为较大数
	d=min(a,b);				//d为较小数
	e=c/d;					//e为余数
	printf("%f\n", c);
	printf("%f\n", d);
	while (e!=0)
	{
		if(d>e) 
		{
			tmp=e;
			e=d;
			d=tmp;
		}
		e=d/e;

	}
	
	
	system("pause");
	return 0;
}

int max(int a,int b)//此函数返回整型值
{
	int c;
	if (a<b)
		c=b;
	else
		c=a;
	return c;
}

int min(int a,int b)
{
	int c;
	a<b?c=a:c=b;
	return c;
}

