#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//45
#include<string.h>
#include<assert.h>
//声明一个指向含有10个元素的数组指针，其中每个元素是一个函数指针，该函数的返回值是int，参数是int*，正确的是（c）
//a (int *p[10])(int*)
//b int[10]*p(int *)
//c int(*(*p)[10])(int *)  (*p)[10]是数组指针，每个元素都是int *，返回值是int
//d int((int *)[10])*p

//实现一个函数，可以左旋字符串中的k个字符，如abcd左旋为bcda

//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;//左转一个字符,将首字符拿出来放在最后面，后面的字符依次往前拿
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;//将第一个字符放到最后位置
//	}
//}

//2.三部翻转法
//ab cdef
//ba fedc翻转左边 右边
//cdef ab翻转整体
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <=len);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}
//46

//47
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.str1字符串中追加一个str1字符串
//	//strcat(str1, str1);自己追加自己不可以
//	strncat(str1, str1, 6);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret= is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
// }

//杨氏矩阵（去哪网）每行数字依次增加，每列数字依次增加
//1 2 3
//4 5 6
//5 6 7
//int FindNum(int arr[3][3], int k, int row, int col)//寻找其中的一个数字
//{
//	int x = 0;//用右上角的元素进行对比
//	int y = col - 1;//将k与每一列相比较
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;//将k与每一行比较
//		}
//		else
//		{
//
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//    int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//当src=\0时停止循环
//	{
//		;
//	}
//	return ret;
//}
//int main()//将arr2copy到arr1中
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}