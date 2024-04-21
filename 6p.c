#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 指针
//int main()
//{
//	int a = 250;
//	int* p = &a; // p为指针，指针就是变量，存放的是地址，指针就是地址
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344; 
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//    return 0;
//}


//int main()
//{
//	int a = 250;
//	int* GEORGE = &a;
//	*GEORGE = 20;   // 解引用操作
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);    // int +1之后向后偏移4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);    // char +1之后向后偏移1个字节
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;   // 数组名代表首元素的地址
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


// 野指针
// 1.  未初始化
// 2.  越界 指针指向的范围超出arr的范围
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p+i)=1;   // <12 超出了arr的范围
//	}
//	return 0;
//}
// 3. 指向的空间内存被释放  在定义函数中局部变量会在跳出后被销毁



//int main()
//{
//	int* psss = NULL;  // 空指针
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;     // 不想用该指针了可以赋值成空指针
//	if (pa != NULL)
//	{
//
//	}
//    return 0;
//}



// 指针运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;  //  首字符的地址，也就是&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;   // p++   改变p的时候也要改变i
//	}
//	return 0;
//}


// 指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int pc = &arr[9] - &arr[0];    // 地址-地址得到的是两个地址之间所存的元素个数
//	printf("%d ", pc);
//	return 0;
//}



// strlen的第三种模拟方法
//int GEORGE(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "LEWANDOWSKI";
//	int len = GEORGE(arr);
//	printf("%d\n", len);
//	return 0;
//}



// 指针和数组
// &arr 取出的是整个数组的地址  arr才是第一个元素的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d\n", arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p=======%p\n", p + i, &arr[i]);
//	}
//	return 0;
//}



// 二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;   // ppa为二级指针变量
//	int*** pppa = &ppa;
//	**ppa = 10;  // 改的是a	
//	return 0;
//}


// 指针数组，存放指针的数组 int*arr
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		printf("%d ", *arr[i]);   // *解引用操作符，返回初始值
//	return 0;
//}



// 指针进阶
//int main()
//{
//	char arr[20] = "LEWANDOWSKI";
//	char* pa = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pa);
//	return 0;
//}


//int main()
//{
//	const char* p = "De Bruyne";// 常量字符串   加上const表示不可修改，常量字符串本就是不可修改的,存放的是首元素D的地址
//	printf("%s\n", p);
//	return 0;
//}


// 指针数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{ 
//			printf("%d ", *(parr[i] + j));
//		}
//		    printf("\n");
//	}
//    return 0;
//}



// 数组指针-指向数组的指针-存放数组的地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p) = &arr;   // p为数组指针
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10];
//	int(*pc)[10] = &arr2;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; // 首个元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}

//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	return 0;
//}


//void GEORGE(int arr[3][5], int x, int y)
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
//void DEBRUYNE(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i=0;i<x;i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);    //等价的四大天王
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	GEORGE(arr, 3, 5);
//	DEBRUYNE(arr, 3, 5);
//	return 0;
//}



// int arr[5];  // arr是一个5元素的整形数组
// int* parr1[10];  // parr1是一个数组，数组有10个元素，每个元素的类型是int* , parr1是指针数组
// int(*parr2)[10];  // parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int ， parr2是数组指针
// int(*parr3[10])[5];  //parr3是一个数组，该数组有10个元素，每一个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素都是int
// 方括号的优先级要高于*



// 一维数组传参
//void test(int arr[])
//{}
//
//void test(int arr[10])
//{}
//
//void test(int *arr)
//{}
//
//void test2(int *arr2[20])
//{}
//
//void test2(int **arr2)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}


// 二维数组传参
//void test(int arr[3][5])
//{}
//
//void test(int arr[][5])   // 可以省略行，但是不能省略列！
//{}
//
//void test(int (*arr)[5])  // 调出来第一行，是指针
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


// 一级指针传参
//void GEORGE(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	GEORGE(p, sz);
//	return 0;
//}


//void test(int *p)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test(&a);
//	test(p);  // 2个都是正确
//	return 0;
//}


// 二级指针传参
//void test(int **p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp=&ptr;
//	test(&ptr);
//	test(pp);
//
//	int* arr[10];
//	test(arr);   // 传指针数组也可以
//	return 0;
//}


// 函数指针
// &函数名 和 函数名 都是函数的地址
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*p) (int, int) = add;   
//	// 解引用
//	printf("%d ", (*p)(5, 6));   // 对指针变量p解引用 得到函数add
//	return 0;
//}



//void print(char* str)
//{
//	printf("%s ", str);
//}
//int main()
//{
//	void(*p)(char*) = print;  // 函数类型为char*
//	(*p)("PAUL GEORGE");
//	return 0;
//}