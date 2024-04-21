#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 数组
//int main()
//{
//	int arr1[10] ;
//	int arr3[10] = {1,2,3};  // 剩下的元素默认初始化为0
//	char arr2[5];    // 方括号内为个数 
//	return 0;
//}

//int main()
//{
//	char arr4[] = "LEWANDOWSKI";
//	printf("%d\n", sizeof(arr4));   // sizeof是求arr4所占空间大小，包含\0
//	printf("%d\n", strlen(arr4));   // strlen是字符串长度，不包含\0
//	return 0;
//}


// 下标问题    -1
//int main()
//{
//	char arr[] = "LEWANDOWSKI";
//	printf("%c\n", arr[4]);    // 下标为4，实际打印出来的是第五个字符
//	return 0;
//} 


//int main()
//{
//	int i = 0;
//	char arr[] = "LEWANDOWSKI";
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);    // 个数中包含\0
//	printf("%d\n", sz);
//	while (i < 11)
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);   // 用地址符号和指针找到数组的内存位置，数组在内存中是连续存放的
//	}
//	return 0;
//}


// 二维数组
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };    // 3行4列  第0列第1列。。。 都是从0开始
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)     // for的嵌套打印二维所有数字
//		{
//			/*printf("%d  ", arr[i][j]);*/
//			printf("%p ", &arr[i][j]);   // 打印地址
//		}
//		printf("\n");
//	}
//	return 0;
//}





void GEORGE(int arr[], int sz)
{
	// 首先确定冒泡排序需要的次数
	int i = 0;
	int LEWANDOWSKI = 1;             // 如果本来就有序则设为1
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int k;
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
				LEWANDOWSKI = 0;      // 如果进行了这个操作则变为0
			}
		}
		if (LEWANDOWSKI == 1)
		{  
			break;
		}
	}

}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	// 对arr转换成升序排序
	int i = 0;
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	GEORGE(arr, sz);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);   // arr只代表第一个数字的地址
//	printf("%p\n", &arr[0]);  
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);   // &arr代表整个数组的地址
//	return 0;
//}



//int main()
//{
//	float acceleration, distance;
//	int time;
//	printf("Enter next time :");
//	scanf("%d", &time);
//	printf("Enter next acceleration: ");
//	scanf("%f", &acceleration);
//	while (time >= 0)
//	{
//		distance = time * 14 + acceleration * time * time / 2;
//		printf("Time= %d hours\n", time);
//		printf("Distance= %f kilometers\n\n", distance);
//		printf("Enter next time :");
//		scanf("%d", &time);
//		printf("Enter next acceleration: ");
//		scanf("%f", &acceleration);
//	}
//	if (time < 0)
//		printf("***End the Program***");
//	return 0;
//}