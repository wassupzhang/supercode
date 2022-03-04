#include <stdio.h>
#include <assert.h>

//char* my_strcat(char*dest, const char*src)//将arr2追加到arr1的后面
//{
//	char* ret = dest;//先将地址存在ret中
//	assert(dest != NULL);
//	assert(src);
//	//1 找到目的字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}//48


//int my_strcmp(const char* str1, const char* str2)//比较str1和str2的大小
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n",ret);
//
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//
//	strncat(arr1, arr2, 3);//指定个数进行追加
//
//	printf("%s\n", arr1);
//	return 0;
//}//49