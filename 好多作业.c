#include<stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz)//int arr[]不要忘记写[]
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	Reverse(arr, sz);//排序
//	print(arr, sz);
//	return 0;
//}

//交换数字
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//	    tmp = arr1[i];
//		arr1[i] = arr2[i];//一个一个的交换数字，不可以arr1与arr2直接交换 
//		arr2[i] = tmp;
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;//short*只占用2个字节，一个arr占用4个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//1代表4个字节，*（p+1）代表占用2个字节，循环4次代表占用8个字节，正好是1，2的位置，所以结果为0 0 3 4 5
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;//存储的时候是倒着存储的44 33 22 11，高位放在高字节
//	*pc = 0;//*pc将第一个位置44改为00
//	printf("%x\n", a);//输出时顺序再按原来的顺序11 22 33 00
//	return 0;
//}

//int i;//全局变量，不初始化默认为0，
//int main()
//{
//	i--;
//	if (i > sizeof(i))//-1默认为无符号数，数字极其大，比4要大许多
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;  
//	b = ++c, c++, ++a, a++;//c=8 b=7 a=8
//	b += a++ + c;          //b=23 a=9
//	printf("a=%d b=%d c=%d\n:", a, b, c);
//	return 0;
//}

