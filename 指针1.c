#include<stdio.h>

//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p);//��ӡ��������ĸa��*p�洢��������ĸ�ĵ�ַ
//	printf("%s\n", p);//�����ӡ����abcdef
//}
//Segmentfault ��վ


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//���ҵ�arr �������ڲ������ֵ�ַ��������
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//[5]��ָpaָ���������5��Ԫ�صģ�������char��*pa��ָ�����������
//
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5],int x,int y)//*p�����һ������   ��5��Ԫ��
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",(*(p + i))[j]);//�±�Ϊj��Ԫ��
//			printf("%d ", p[i][j]);//������ĵȼ�
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//���ĸ��ǵȼ۵Ĺ�ϵ
//	}
//	return 0;
//}
