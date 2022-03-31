#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	//使用free释放动态开辟内存的一部分,所以无法运行
//	//必须要释放所有的内存才可以
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//对同一块动态内存的多次释放(错误案例)
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
//	//p = NULL;释放后要加一个空指针
//
//	free(p);
//	return 0;
//}


//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//p是形参只在getmemory内部有效，所以无法返回值。str是传值给p的，要是传地址过去就可以返回了
//	//动态开辟内存尚未释放并且无法找到，会造成内存泄露
//	strcpy(str, "hello world");//
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;//运行出错了
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//p运行出来之后就销毁了，str再访问地址时就找不到了，随机输出一个值
//	printf(str);
//}
//int main()
//{
//	Test();//随机值
//	return 0;
//}

//高质量的c-c++编程
//void GetMemory(char **p, int num)
//{
//	*p = (char*)malloc(num);
//
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//}
//int main()
//{
//	Test();//能打印hello但没有释放空间
//	return 0;
//}

//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//提前释放了内存，导致后面非法访问了
//	//str = NULL;//改完之后
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//
//}
//int main()
//{
//	Test();
//	return 0;
//}//65

//char *get_memory()
//{
//	char p = (int*)malloc(40);
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = get_memory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//66
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//一次开辟两个内存空间
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i]=i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

