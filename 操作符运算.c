#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof�ĵ�λ���ֽڸ�����arr=4����sizeof��arr��=4��4=16
//	int* p = &arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		//p = p + 1;//p��1�ͻ�����һ��ַ
//		*p++;//ָ��ļӼ�
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ָ��õ�����֮��Ԫ�صĸ���
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;//��һ���ַ�����
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//ָ���ָ��=֮����ַ����� bit\0
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//����Ҳ����ͨ��ָ��������
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa���Ƕ���ָ�룺�����paһ��ָ��ĵ�ַ����һ��*��ppaָ��������int*
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}

