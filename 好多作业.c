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
//void Reverse(int arr[], int sz)//int arr[]��Ҫ����д[]
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
//	Reverse(arr, sz);//����
//	print(arr, sz);
//	return 0;
//}

//��������
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
//		arr1[i] = arr2[i];//һ��һ���Ľ������֣�������arr1��arr2ֱ�ӽ��� 
//		arr2[i] = tmp;
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;//short*ֻռ��2���ֽڣ�һ��arrռ��4���ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//1����4���ֽڣ�*��p+1������ռ��2���ֽڣ�ѭ��4�δ���ռ��8���ֽڣ�������1��2��λ�ã����Խ��Ϊ0 0 3 4 5
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
//	char *pc = (char*)&a;//�洢��ʱ���ǵ��Ŵ洢��44 33 22 11����λ���ڸ��ֽ�
//	*pc = 0;//*pc����һ��λ��44��Ϊ00
//	printf("%x\n", a);//���ʱ˳���ٰ�ԭ����˳��11 22 33 00
//	return 0;
//}

//int i;//ȫ�ֱ���������ʼ��Ĭ��Ϊ0��
//int main()
//{
//	i--;
//	if (i > sizeof(i))//-1Ĭ��Ϊ�޷����������ּ���󣬱�4Ҫ�����
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

