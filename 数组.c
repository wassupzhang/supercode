#include<stdio.h>

//int main()
//{
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof�������ǿռ�Ĵ�С\0Ҳ�����ڣ�������������顢���͵Ĵ�С����λ���ֽ�
//	
//	printf("%d\n", strlen(arr4));//strlen����\0֮ǰ���ַ����ĳ��ȣ�����\0��ֻ����ַ����󳤶�
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//�ַ����ķ���
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}

//int main()//��ַ�ķ���
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);//��ӡ��ַ��%p
//	}
//	return 0;
//
//}


int main()
{
	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//��ά���飺ǰ���[]��ʾ��������ʡ�ԣ�����ı�ʾ��������ʡ��
	int arr[3][4] = { {1,2,3},{4,5} };//���ֳ������е�һ��Ϊ1 2 3���ڶ���4 5
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);//ÿһ�еĵ�ַ��������,�ɵ͵���
		}
		printf("\n");
	}
	
	return 0;
}