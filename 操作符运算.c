#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof的单位是字节个数如arr=4，则sizeof（arr）=4×4=16
//	int* p = &arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		//p = p + 1;//p加1就换到下一地址
//		*p++;//指针的加减
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针减指针得到的是之间元素的个数
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;//第一个字符个数
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//指针减指针=之间的字符个数 bit\0
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//数组也可以通过指针来访问
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针：存的是pa一级指针的地址；第一个*：ppa指的类型是int*
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}

