
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[])
{
	float a,b,c,d,e,tmp;
	int max(int a,int b);
	int min(int a,int b);	//��main������Ҫ������������
	printf("Please input a:");
		scanf("%f",&a);
	printf("Please input b:");
		scanf("%f",&b);
	c=max(a,b);				//cΪ�ϴ���
	d=min(a,b);				//dΪ��С��
	e=c/d;					//eΪ����
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

int max(int a,int b)//�˺�����������ֵ
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

