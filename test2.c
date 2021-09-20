#include <stdio.h>


//
//int main()
//{
//	//声明extent外部符号的,在test中
//    extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//
//
//}

//
////define 定义的标识符常量
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}


//4.枚举常量：一一列举
//如：三原色：红、黄、蓝

//enum Sex
//{
//	MALE,
//	FEMALE,//枚举常量
//	SECRET
//};
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//数组，里面包括a,b,c,\0---\0为字符串结束标志
//	char arr2[] = { 'a','b','c' };//里面没有结束标志，随意添加
//	printf("%s\n", arr2);
//
//	return 0;
//
//}
//static int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//} 