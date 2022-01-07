#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 16;
//	int b = a >> 1;//二进制右移一位，算数移位:左边用原值的符号位填充；逻辑右移：左边补0
//	//对于左移操作符，左边丢弃，右边补0
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//按位异或，相同为0，相异为1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//000000000000000000011
//	//000000000000000000101
//	//000000000000000000110,相异为1
//	printf("%d\n", c);
//	return 0;
//}

//不用第三个变量，交换a,b,运用异或的方法
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	a = a ^ b;//设置一密码
//	b = a ^ b;//密码与5生成3
//	a = a ^ b;//密码与3生成5
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}

//找二进制数中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))//右移与001进行按位与，相同为1，即找到一个，不同为0
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

