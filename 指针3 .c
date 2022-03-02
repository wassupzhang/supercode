#include<stdio.h>
#include<string.h>
//35
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//每一趟少一对比较
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//排序函数（数组，长度，每个数的字节数，函数）
//
//	//bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//比较年龄

//int cmp_stu_by_age(const void*e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"list",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//
//int main()
//{
//	test3();
//
////	int a = 10;
////	void* p = &a;
////	//void* 类型的指针，可以接收任何类型的地址
////	//void* 类型的指针，不能进行解引用
////	//void* 类型的指针，不能进行加减整数的操作
////	*p = 0;
//	return 0;
//}