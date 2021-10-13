#include<stdio.h>

//int main()
//{
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof测量的是空间的大小\0也算在内，计算变量、数组、类型的大小，单位是字节
//	
//	printf("%d\n", strlen(arr4));//strlen求在\0之前的字符串的长度，不算\0，只针对字符串求长度
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//字符串的访问
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}

//int main()//地址的访问
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);//打印地址用%p
//	}
//	return 0;
//
//}


int main()
{
	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//二维数组：前面的[]表示行数可以省略，后面的表示列数不能省略
	int arr[3][4] = { {1,2,3},{4,5} };//被分成了两行第一行为1 2 3，第二行4 5
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);//每一行的地址是连续的,由低到高
		}
		printf("\n");
	}
	
	return 0;
}