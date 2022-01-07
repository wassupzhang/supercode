#include<stdio.h>

//指针的类型决定了：指针走一步走多远（指针的步长）
//int*p;p+1->4个字节
//char*p;p+1->1个字节
//double*p;p+1->8个字节

//字符越界的野指针
//int main()
//{
//	int a[10] = { 0 };//10个字符串
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)//只有10个字符串，无法达到12个
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;//返回变量后，则之前的存储空间无法访问
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

