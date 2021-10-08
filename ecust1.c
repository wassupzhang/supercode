#include<stdio.h>

//int main()//计算分数的加减
//{
//	int i = 0;
//	double sum = 0.0;//变成浮点数是为了防止后面的除法运算sum的值只有整数部分而不出现小数
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//}


//int main()//找10个数中的最大值
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//先假设第一个数为最大值，
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];//让i与其比较，之后再把比较的大者赋值给max,一个个循环
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//
//}



//int main()
//{
//	int i = 0;
//	
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d " , i, j, i*j);//-2d是左对齐，2d是右对齐。先列公式然后再赋值
//		}
//		printf("\n");
//	}
//	return 0;
//}