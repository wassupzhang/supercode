#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d", a, b, c);
//
//
//	return 0;
//}


//int main()//找最大公约数
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m%n != 0)//辗转相除法，用余数和除数取最大公约数
//	{
//		r = m % n;
//		m = n;
//		n = r;//余数赋值给n
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i%100!=0 )//  ||是或者的意思
//			printf("%d ", i);
//		else if (i % 400 == 0)
//			printf("%d ", i);
//
//	}
//	return 0;
//}


int main()//查找素数
{
	int i = 0;
	int a = 0;
	for (i = 1; i <= 100; i++)
	{
		
		for (a = 2; a < i; a++)
		{

			if (i%a == 0)
				break;
		}
		if (i == a)
		{
			printf("%d ", i);
		}

	}
	
	return 0;
}