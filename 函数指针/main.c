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




//----------------------------------����ĸת��д-----------------------------------------------------------------

char  buf[100] = { 0 };
char * bianMax(char * str)
{
	//����һ��ָ��ָ���ַ�����
	char * bufr = buf;
	//�޸ĵ�һ���ַ�
	*str >= 97 && *str <= 122 ? (*bufr++ = *str - 0x20) : (*bufr++ = *str);
	//�޸ĺ�����ַ�
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
	printf("%s\n", bianMax("Asgsag Sgsa gfh�ո�fghf"));
	printf("%s\n", myfun(bianMax, "assa asfsa Afs"));
	system("pause");
	return 0;
}




