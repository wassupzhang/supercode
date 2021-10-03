#include<stdio.h>
#include<string.h>
#include<windows.h>
//
//int main()//查找字符的位置，左右逼近
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)//不能缺少等号
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)//后面不能加分号
//		{
//			right = mid - 1;
//
//		}
//	    else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是，%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";//将arr1换到arr2
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//不是减1，因为后面还有一个\0.
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}


