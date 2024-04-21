#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//// 函数
//int ADD(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;          // return z 很重要
//}
//int main()
//{
//	int a = 10;
//	int b = 50;
//	int sum;
//	sum = ADD(a, b);
//	printf("The sum is :%d",sum);
//	return 0;
//}


// 1. 库函数
//// strcpy函数简介
//int main()
//{
//	char arr1[] = "LEWANDOWSKI";
//	char arr2[50] = "Mbappe is better than Messi";
//	strcpy(arr2, arr1);     // strcpy(目的地，来源地）
//	printf("%s\n", arr2);
//	return 0;
//}


//// memset 内存设置
//int main()
//{
//	char arr[] = "HE is my favourite player";
//	memset(arr, 'IT', 2);   // memset(要替换的数组，'替换内容',替换几个）
//	printf("%s\n", arr);
//	return 0;
//}


// 2. 自定义函数
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 250;
//	int b = 500;
//	int max;
//	max = MAX(a, b);
//	printf("The bigger value is : %d", max);
//	return 0;
//}


// 利用指针完成交换数据的操作
//void SWAP(int* pa, int* pb)       // 如果不用指针无法完成任务，但如果单纯在main函数下直接用而不单独定义函数则可以不用指针
//{                                   // void表示空的意思，意思是这个自定义函数不需要返回值，不用写return x这种
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 50;
//	int b = 250;
//	SWAP(&a, &b);    // 用取地址符号取a和b的地址
//	printf("a= %d b= %d", a, b);
//	return 0;
//}




// 函数的参数
// 实参：在main函数下定义的参数  形参：在自定义函数中定义的参数，在函数外不存在
// 函数的调用 ：传值调用和传址调用 （传址调用即用指针）



// 打印100-200之间的素数
//int is_prime(int n)    // 是素数返回1
//{
//	int j;
//	for(j = 2; j < n+1; j++)
//	{
//		if (n % j == 0)
//			return 0;
//		if (j == n)
//			return 1;
//	}
//
//}
//int main()
//{
//	int i;
//	int sum;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d  ", i);
//	}
//	return 0;
//}


// 判断某一年是否为闰年
//int GEORGE(int i)
//{
//	if (i % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y;	
//	printf("Enter a year :");
//	scanf("%d", &y);
//	if (GEORGE(y) == 1)
//		printf("It is 闰年");
//	else
//		printf("不是闰年");
//}



 //用函数来写二分法查找数
//int LEWANDOWSKI(int arr[], int k,int sz)
//{                                 // 当调用函数时，参数不能包含数组，如果要用数组作为函数输入的一部分，则只会返回该数组第一个数的地址，此时的arr为指针 
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			return mid;     // 返回下标，直接输出
//		}          // 不要乱加break
//	}
//	return -1;
//}
//
//int main()           // 如果找到了就返回这个数的下标，找不到就返回-1
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);    //提前求好数组元素个数
//	int ret = LEWANDOWSKI(arr, k,sz);
//	if (ret == -1)
//		printf("犯病了");
//	else
//		printf("找到了，下标为：%d\n", ret);
//	return 0;
//}



// 每调用一次函数，使num增加1
//void ADD(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num= %d\n", num);
//	ADD(&num);
//	printf("num= %d\n", num);
//	ADD(&num);
//	printf("num= %d\n", num);
//}



// 函数嵌套 链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));    // 结果为4321，printf嵌套后表示打印的数字个数
//	return 0;
//}

// 引用自己在另外源文件中写的函数 用 #include "add.h"  不用尖括号


//// 函数的递归   自己调用自己
//int main()
//{
//	main();             // 这种函数会一直持续下去，因为没有限制条件，会stack overflow
//	return 0;
//}


//// 将数字拆成每个数字   1234—1 2 3 4
//void print(int i)
//{
//	if (i > 9)
//	{						 // 递归需要限制条件，满足后便不再继续
//		print(i / 10);       // print中调用print，反复执行if条件直至不满足，再输出结果，这就是递归
//	}
//	printf("%d  ", i % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("Enter a number : ");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}




//int GEORGE(char*str)
//{
//	if (*str != '\0')              // 用递归的方式解决，同上面的思路一样，大事化小，LEWANDOWSKI—1+EWANDOWSKI—1+1+WANDOWSKI。。。
//	{
//		return 1+ GEORGE(str + 1);
//	}
//	else
//		return 0;
//}
//int GEORGE(char* str)
//{
//	int count = 0;
//	while (*str != '\0')   // 字符串最后一位为\0, 用指针一个一个地从前往后找，str代表位置数，*str代表该位置对应的字符
//	{                       // 带*号的表示字符，不带则表示数位
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "LEWANDOWSKI";
//	int len = GEORGE(arr);
//	printf("len= %d ", len); 
//	return 0;
//}



// 阶乘的递归形式
//int LEWANDOWSKI(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i * LEWANDOWSKI(i - 1);
//}

//int LEWANDOWSKI(int k)
//{
//	int i;
//	int ret = 1;
//	for (i = 1; i <= k; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n;
//	int GEORGE;
//	printf("Enter a number : ");
//	scanf("%d", &n);
//	GEORGE = LEWANDOWSKI(n);
//	printf("%d", GEORGE);
//	return 0;
//}


// 斐波那契 
//int LEWANDOWSKI(i)          // 此时用while比递归快得多
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//}

//int LEWANDOWSKI(i)
//{
//	int r = 1;
//	if (i <= 2)
//		return 1;
//	else
//		return LEWANDOWSKI(i - 2) + LEWANDOWSKI(i - 1);             // 但执行起来大的数非常缓慢
//
//}
//int main()
//{
//	int n;
//	int GEORGE;
//	printf("Enter a number :");
//	scanf("%d", &n);
//	GEORGE = LEWANDOWSKI(n);
//	printf("%d", GEORGE);
//	return 0;
//}



