#include<stdio.h>
#include<stdlib.h>

int mymax(int, int);
int myadd(int, int);
double mysub(int a, int b);
double myindex2(double(*)(int, int), int, int);
int myindex(int(*)(int, int), int , int );

int main()
{
	printf("%d\n", myindex(myadd, 1, 56));
	printf("%.2f\n", myindex2(mysub, 3, 2));
	system("pause");
	return 0;
}

//����ָ������ָ�����Ժ������ж�̬�ĵ���,�������Ĳ�����ƥ�䣬ֻȡǰ��ģ�����ȵ��õĲ����٣����ʹ�����ֵ
int myindex(int(*p1)(int,int), int a, int b)
{
	if (a > 0) {
		return p1(b, a);
	}
	else {
		return 0;
	}
}

double myindex2(double (*p2)(int, int), int a, int b)
{
	return p2(a, b);
}

int mymax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int myadd(int a, int b)
{
	return a + b;
}

double mysub(int a, int b)
{
	return a/ (b*1.0);
}