#include<stdio.h>
#include<stdlib.h>

int mymax(int, int);
int myadd(int, int);
double mysub(int a, int b);
double myindex2(double(*)(int, int), int, int);
int myindex(int(*)(int, int), int , int );

int main1()
{
	printf("%d\n", myindex(mymax, 1, 56));
	printf("%.5f\n", myindex2(mysub, 3, 2));
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




//----------------------------------首字母转大写-----------------------------------------------------------------

char  buf[100] = { 0 };
char * bianMax(char * str)
{
	//定义一个指针指向字符数组
	char * bufr = buf;
	//修改第一个字符
	*str >= 97 && *str <= 122 ? (*bufr++ = *str - 0x20) : (*bufr++ = *str);
	//修改后面的字符
	while (*str++ && ((*str++ == 32 && (*bufr++ = 32)) ? (*str >= 97 && *str <= 122 ? (*bufr++ = *str - 0x20) : (*bufr++ = *str)) : (*bufr++ = *--str)));
	/*{
		if (*str == 32)
		{
			*bufr++ = *str;
			str++;
			*str >= 97 && *str <= 122 ? (*bufr++ = *str - 0x20) : (*bufr++ = *str);
		}
		else
		{
			*bufr++ = *str;
		}
		
	}*/
	*--bufr = 0;
	return buf;
}

char * myfun(char* (*p)(char *),char * str)
{
	return p(str);
}

int main()
{
	printf("%s\n", bianMax("Asgsag Sgsa gfh刚刚fghf"));
	printf("%s\n", myfun(bianMax, "assa asfsa Afs"));
	system("pause");
	return 0;
}




