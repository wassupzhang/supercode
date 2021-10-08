#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);//前面的为了拷贝的终点，后面的为拷贝的内容
//	printf("%s\n", arr2);
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//memset为内存设置，将前五个设置为*
//	printf("%s\n", arr);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//取最大值
//	printf("max=%d\n", max);
//	return 0;
//}


//void Swap2(int* pa, int* pb)//交换a，b两个值，需要使用指针，使用普通方法不能直接交换
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;//不用写条件语句
//}
//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//		
//	}
//	return 0;
//}

