#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//45
#include<string.h>
#include<assert.h>
//����һ��ָ����10��Ԫ�ص�����ָ�룬����ÿ��Ԫ����һ������ָ�룬�ú����ķ���ֵ��int��������int*����ȷ���ǣ�c��
//a (int *p[10])(int*)
//b int[10]*p(int *)
//c int(*(*p)[10])(int *)  (*p)[10]������ָ�룬ÿ��Ԫ�ض���int *������ֵ��int
//d int((int *)[10])*p

//ʵ��һ�����������������ַ����е�k���ַ�����abcd����Ϊbcda

//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;//��תһ���ַ�,�����ַ��ó�����������棬������ַ�������ǰ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;//����һ���ַ��ŵ����λ��
//	}
//}

//2.������ת��
//ab cdef
//ba fedc��ת��� �ұ�
//cdef ab��ת����
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
//	//1.str1�ַ�����׷��һ��str1�ַ���
//	//strcat(str1, str1);�Լ�׷���Լ�������
//	strncat(str1, str1, 6);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr-���Ӵ�
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

//���Ͼ���ȥ������ÿ�������������ӣ�ÿ��������������
//1 2 3
//4 5 6
//5 6 7
//int FindNum(int arr[3][3], int k, int row, int col)//Ѱ�����е�һ������
//{
//	int x = 0;//�����Ͻǵ�Ԫ�ؽ��жԱ�
//	int y = col - 1;//��k��ÿһ����Ƚ�
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;//��k��ÿһ�бȽ�
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
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//��src=\0ʱֹͣѭ��
//	{
//		;
//	}
//	return ret;
//}
//int main()//��arr2copy��arr1��
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}