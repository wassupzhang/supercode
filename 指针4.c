//35
#include <stdio.h>
//int Add(int x, int y)
//{
//	
//	return x+y;
//}
//
//int main()
//{
//	int(*pAdd)(int, int) = Add;
//	int sum = pAdd(1, 2);
//	printf("%d\n", sum);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	
//	int(*p)(int, int) = Add;
//	printf("%d\n",(*p)(2,2));
//	return 0;
//}

//int main()
//{
//	//sizeof(数组名)-数组名表示整个数组大小
//	//&数组名- 表示整个数组
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//4 表示首元素的地址，a+0还是首元素的地址
//	printf("%d\n", sizeof(*a));//4 表示首元素的地址
//	printf("%d\n", sizeof(a+1));//4 a+1第2个元素的地址
//	printf("%d\n", sizeof(a[1]));//4 第2个元素的大小
//	printf("%d\n", sizeof(&a));//4 取出的是数组的地址，地址就是4个字节
//	printf("%d\n", sizeof(*&a));//16  &a数组的地址，数组地址解引用访问的是数组
//	printf("%d\n", sizeof(&a+1));//4  还是地址的大小
//	printf("%d\n", sizeof(&a[0]));//4
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6*1=6
//	printf("%d\n", sizeof(arr+0));//4  arr是首元素的地址，arr+0还是首元素的地址
//	printf("%d\n", sizeof(*arr));//1  首元素的地址解引用
//	printf("%d\n", sizeof(arr[1]));//1  
//	printf("%d\n", sizeof(&arr));//4 数组的地址
//	printf("%d\n", sizeof(&arr+1));//4  跳过整个数组后的地址
//	printf("%d\n", sizeof(&arr[0]+1));//第二个元素的地址
//
//	//strlen()是数‘字符’的长度到 '\0'为止
//	printf("%d\n", strlen(arr));//随机值 没有\0 所以随机取值
//	printf("%d\n", sizeof(&arr+1));//随机值  跳过一个之后，随机取值比上面少6
//}


//38
//char* p="abcdef"
//printf("%d\n", sizeof(p));//4  首字母地址大小
//printf("%d\n", sizeof(p+1));//4  b的地址
//printf("%d\n", sizeof(*p));//1  就是首字母a
//printf("%d\n", sizeof(p[0]));//1  就是a
//printf("%d\n", sizeof(&p));//4
//printf("%d\n", sizeof(&p+1));//4
//printf("%d\n", sizeof(&p[0]+1));//4

//printf("%d\n", strlen(p));//6
//printf("%d\n", strlen(p+1));//5
//printf("%d\n", strlen(&p));//随机值  不知道a的地址是什么如11 22 33，永不停止就是随机值
//printf("%d\n", strlen(&p+1));//随机值
//printf("%d\n", strlen(&p[0]+1));//5  从b向后数

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%p\n", sizeof(a));//48  3行4列 3*4*4=48
//	printf("%p\n", sizeof(a[0][0]));//4
//	printf("%p\n", sizeof(a[0]));//16  a[0]是第一行作为数组名
//	printf("%p\n", sizeof(a[0]+1));//4 a[0]是第一行数组名，数组名此时是首元素的地址 a[0]+1是第一行第二个元素的地址
//	printf("%p\n", sizeof(*(a[0]+ 1)));//4  第一行第二个元素  大小是4
//	printf("%p\n", sizeof(a+1));//4 首元素的地址是第一行，a+1就是第二行地址
//	printf("%p\n", sizeof(&a[0]+1));//4 第二行地址
//	printf("%p\n", sizeof(*a));//16 第一行的大小
//} 