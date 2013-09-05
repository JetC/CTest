
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[])
{
	float a,b,c,d;
	int max1(int a,int b);	//在main函数中要声明其他函数
	int max2(int a,int b);
	a=2.0;
	b=3.0;
	c=max1(a,b);
	d=max2(a,b);
	printf("%f\n", c);
	printf("%f\n", d);
	system("pause");
	return 0;
}

int max1(int a,int b)
{
	int c;
	if (a<b)
		c=b;
	else
		c=a;
	return c;
}

int max2(int a,int b)
{
	int c;
	a<b?c=b:c=a;
	return c;
}