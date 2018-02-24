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

//采用指向函数的指针来对函数进行动态的调用,如果定义的参数不匹配，只取前面的，如果比调用的参数少，则会使用随机值
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