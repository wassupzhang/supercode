#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;//��p�ռ��棬��ֹ���ҵ�
//	return 0;
//}

//calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//�������ÿһ���ռ䶼��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + 1));
//		}
//	}
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//������̬�����ڴ�ռ�Ĵ�С
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%d\n", strerror);
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//20���ֽڲ�������ʹ�ã�����ϣ����40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc
//	//reallocʹ��ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻�Ŀռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ���󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.ʹ��һ���µı���������realloc�����ķ���ֵ
//
//	int*ptr =realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;//���ٵĿռ�
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ��ڴ�
//	free(ptr);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;//���Ǵ����������ջ�����з��ʣ���freeֻ���ڶ��������ͷ�
//
//}