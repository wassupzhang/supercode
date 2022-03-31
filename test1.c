#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候，应该还给操作系统
//	free(p);
//	p = NULL;//将p空间封存，防止被找到
//	return 0;
//}

//calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//把申请的每一个空间都变为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + 1));
//		}
//	}
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//调整动态开辟内存空间的大小
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%d\n", strerror);
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//20个字节不能满足使用，我们希望有40个字节的空间
//	//这里就可以使用realloc
//	//realloc使用注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并把原来内存中的数据拷贝回来，释放旧的内存空间最后返回新开辟的内存空间地址
//	//3.使用一个新的变量来接受realloc函数的返回值
//
//	int*ptr =realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;//开辟的空间
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放内存
//	free(ptr);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;//这是错误的这是在栈区进行访问，而free只能在堆区进行释放
//
//}