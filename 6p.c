#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// ָ��
//int main()
//{
//	int a = 250;
//	int* p = &a; // pΪָ�룬ָ����Ǳ�������ŵ��ǵ�ַ��ָ����ǵ�ַ
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
//	*GEORGE = 20;   // �����ò���
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);    // int +1֮�����ƫ��4���ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);    // char +1֮�����ƫ��1���ֽ�
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;   // ������������Ԫ�صĵ�ַ
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


// Ұָ��
// 1.  δ��ʼ��
// 2.  Խ�� ָ��ָ��ķ�Χ����arr�ķ�Χ
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p+i)=1;   // <12 ������arr�ķ�Χ
//	}
//	return 0;
//}
// 3. ָ��Ŀռ��ڴ汻�ͷ�  �ڶ��庯���оֲ�������������������



//int main()
//{
//	int* psss = NULL;  // ��ָ��
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;     // �����ø�ָ���˿��Ը�ֵ�ɿ�ָ��
//	if (pa != NULL)
//	{
//
//	}
//    return 0;
//}



// ָ������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;  //  ���ַ��ĵ�ַ��Ҳ����&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;   // p++   �ı�p��ʱ��ҲҪ�ı�i
//	}
//	return 0;
//}


// ָ��-ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int pc = &arr[9] - &arr[0];    // ��ַ-��ַ�õ�����������ַ֮�������Ԫ�ظ���
//	printf("%d ", pc);
//	return 0;
//}



// strlen�ĵ�����ģ�ⷽ��
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



// ָ�������
// &arr ȡ��������������ĵ�ַ  arr���ǵ�һ��Ԫ�صĵ�ַ
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



// ����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;   // ppaΪ����ָ�����
//	int*** pppa = &ppa;
//	**ppa = 10;  // �ĵ���a	
//	return 0;
//}


// ָ�����飬���ָ������� int*arr
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
//		printf("%d ", *arr[i]);   // *�����ò����������س�ʼֵ
//	return 0;
//}



// ָ�����
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
//	const char* p = "De Bruyne";// �����ַ���   ����const��ʾ�����޸ģ������ַ��������ǲ����޸ĵ�,��ŵ�����Ԫ��D�ĵ�ַ
//	printf("%s\n", p);
//	return 0;
//}


// ָ������
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



// ����ָ��-ָ�������ָ��-�������ĵ�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p) = &arr;   // pΪ����ָ��
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
//	int* p = arr; // �׸�Ԫ�صĵ�ַ
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
//			printf("%d ", p[i][j]);    //�ȼ۵��Ĵ�����
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



// int arr[5];  // arr��һ��5Ԫ�ص���������
// int* parr1[10];  // parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int* , parr1��ָ������
// int(*parr2)[10];  // parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int �� parr2������ָ��
// int(*parr3[10])[5];  //parr3��һ�����飬��������10��Ԫ�أ�ÿһ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ�ض���int
// �����ŵ����ȼ�Ҫ����*



// һά���鴫��
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


// ��ά���鴫��
//void test(int arr[3][5])
//{}
//
//void test(int arr[][5])   // ����ʡ���У����ǲ���ʡ���У�
//{}
//
//void test(int (*arr)[5])  // ��������һ�У���ָ��
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


// һ��ָ�봫��
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
//	test(p);  // 2��������ȷ
//	return 0;
//}


// ����ָ�봫��
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
//	test(arr);   // ��ָ������Ҳ����
//	return 0;
//}


// ����ָ��
// &������ �� ������ ���Ǻ����ĵ�ַ
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
//	// ������
//	printf("%d ", (*p)(5, 6));   // ��ָ�����p������ �õ�����add
//	return 0;
//}



//void print(char* str)
//{
//	printf("%s ", str);
//}
//int main()
//{
//	void(*p)(char*) = print;  // ��������Ϊchar*
//	(*p)("PAUL GEORGE");
//	return 0;
//}