#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = ~a;//按（二进制）按位取反
//	//000000000000
//	//111111111111全部取反变为1
//	printf("%d\n", b);//打印的是原码
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，赋值给b，再++
//	//int b = ++a;//前置++，先++，再使用a=11,b=11
//	//int b = a--;//先使用，再减一
//	//int b =--a;//先减一，在使用
//	printf("a=%d\n b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//int a = (int)3.14;//强制类型转换（int）
//	//	return 0;
//
//	//真--非0
//	//假--0
//	//&&--逻辑与
//	//||--逻辑或
//	int a = 0;
//	int b = 4;
//
//	int c=a || b;
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//
//	return 0;
//}
//
//
//int main()
//{
//	typedef unsigned int u_int;//typedef将unsigned重新命名
//
//	unsigned int sum = 20;
//	u_int num2 = 20;//与上面是一个类型，只不过名字不一样
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static修饰局部变量
//	//static修饰全局变量时，静态变量只能在自己所在的源文件内部使用，出了源文件就没法在使用了。
//	a++  ;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();//从这转到上面的test（）
//		i++;
//	}
//	return 0;
//
//}

//extern int Add(int x, int y);//加入static后无法调用了
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//}