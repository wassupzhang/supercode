#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//   \32是2个8进制数字，对应一个ASCII码值 
//	return 0;
//}

//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n", line);
//		line++;
//
//	}
//	if (line >= 20000)
//		printf("好offer\n");
//	return 0;
//	
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	//int a = 1;//000000000001
//	//int b = a << 2;//向左移动2位，二进制00000000100=1*2²=4
//	//printf("%d\n", b);
//	//return 0;
//	//二进制操作
//	//&按位与
//	//|按位或
//	//^按位异或
//	int a = 3;
//	int b = 5;
//	int c = a^b;//不是次方，是异或。对应的二进制相同，则为0；对应的二进制相异，则为1。
//	printf("%d\n", c);
//	//011
//	//101
//	//110,按位异或：上面两个都为1，则变为0；一个1一个0则变为1.1*2^2+1*2=6（十进制）
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//10个整形元素的数组，10*sizeof{int}=40
//	printf("%d\n", sizeof(arr));
//	//int a = 10;
//	////sizeof 计算的是变量类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//}

