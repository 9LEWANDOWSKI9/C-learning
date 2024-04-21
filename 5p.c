#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 操作符详解
//int main()
//{
//	int a = 5 / 2;	  // 得到商
//	int b = 5 % 2;    // 得到余数  两边必须都为int
//	printf("%d  ", a); 
//	printf("%d  ", b);
//	return 0;
//}


//int main()
//{
//	int a = 16;
//	int b = a >> 2;
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;   // &是按位与的意思，2进制下
//	int d = a | b;   // |是按位或的意思
//	int f = a ^ b;   // ^ 表示按位异或
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", f);
//    return 0;
//}



// 在不创建第三个临时变量的前提下交换两个数字
//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 加减法，但可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	// 异或
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a= %d\nb= %d\n ", a, b);
//	return 0;
//}


// 统计num的补码中有多少个1（只适用于正数，负数就寄了）
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}



// 优化改良
// 32个bit位
//int main()
//{
//	int num = 0;
//		int count = 0;
//		scanf("%d", &num);
//		int i = 0;
//		for (i = 0; i < 32; i++)
//		{
//			if (1 == ((num >> i) & 1))
//				count++;
//		}
//		printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	int a =		0;
//	if (a)     // 如果a为真
//		printf("LEWANDOWSKI");
//	if (!a)    // 如果a为假
//		printf("PAUL GEORGE");
//	return 0;
//}


//int main()
//{
//	int a = 5000;
//	int* p = &a;
//	*p = 250;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	char c = 'H';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}


//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = s + 5));
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	/*printf("%d\n", ++a);*/    // 先++，再用a，打印出来为11
//	printf("%d\n", a++);		// 先用a，再++，打印出来为10
//	return 0;
//}


// 强制转换
//int main()
//{
//	/*int a = 3.14;*/
//	int a = (int)3.14;   // 强制转换
//	printf("%d", a);
//	return 0;
//}


// 条件（三目）操作符
// exp1 ? exp2 : exp3   意思是：如果exp1成立，输出exp2，若不成立，输出exp3
//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = (a > 5 ? 3: -3);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//	c = (a > b ? a : b);
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));			// %u是无符号的十进制数的意思
//	printf("%u\n", sizeof(+c));    
//	printf("%u\n", sizeof(!c));
//    return 0;
//}