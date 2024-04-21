#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

// Lecture 1-3
//int main()
//{
//	int speed = 14;
//	int distance, time;
//	printf("Enter a time: ");
//	scanf("%d", &time);
//	while (time > 0)
//	{
//		distance = speed * time;
//		printf("Time=%d hours\n", time);
//		printf("Distance= %d km\n", distance);
//		printf("Enter a time: ");
//		scanf("%d", &time);
//	}
//	if (time <= 0)
//		printf("End the program");
//	return 0;
//}


//int main()
//{
//	float mc, ph;
//	FILE* fin, * fout;
//	fin = fopen("ph-infile.txt", "r");
//	fout = fopen("ph-outfile.txt", "w");
//	while (fscanf(fin, "%f", &mc) != EOF)   // 从fin中读取文件内容，格式为%f，存储到mc中，相当于为mc变量赋值
//	{
//		ph = -log10(mc);
//		fprintf(fout, "\nMolar concentration = % e\n", mc);
//		fprintf(fout, "pH = % f\n", ph);
//
//	}
//	return 0;
//}


// Lecture 4-6

// do...while 
//int main()
//{
//	int x = 0;
//	printf("x=%d\n", x);
//	do    // do...while 至少做一次循环
//	{
//		x = x - 2;
//		printf("x=%d\n", x);
//	} 
//	while (x >= 1);
//	return 0;
//}


// 字符在内存中以ASCLL码的形式存储
//int main()  // 对于%d来说，会跳过空格知道找到整数，而%c则不会跳过空格，因为空格也是字符
//{
//	char c1, c2, c3, c4;
//	int x;
//	printf("Enter the numbers: ");
//	scanf("%d%c%c%c%c", &x, &c1, &c2, &c3, &c4);
//	printf("%d%c%c%c%c\n", x, c1, c2, c3, c4);
//	printf("%d", x);
//
//	return 0;
//}


//int main()
//{
//	char c;
//	c = 'y';
//	printf("The character of int %d is %c\n", c, c);   // 这表明了在内存中，字符是以ASCLL码的形式存储
//	return 0;
//}

//int main()
//{
//	char n;
//	int i = 9;
//	n = '9';
//	printf("The integer of character %c is %d\n", n, n);
//	printf("The character of integer %d is %c\n", i, i);
//	return 0;
//}

//int main()
//{
//	float x, y;
//	double z, w;
//	x = 12.3456;
//	y = 1.2345e-10;
//	z = -66.123456;
//	w = -88.3456789e16;
//	printf("x=%e,y=%e\n", x, y);
//	printf("x=%E,y=%E\n", x, y);
//    return 0;
//}

//
//int main()
//{
//	float x;
//	double y;
//	scanf("%f%lf", &x, &y);
//	printf("x=%f, y=%f", x, y);
//	printf("x=%e,y=%e", x, y);
//	return 0;
//}


//int main()
//{
//	float x;
//	double y;
//	scanf("%f%lf", &x, &y);
//	printf("x=%f,y=%f\n", x, y);
//	printf("x=%e,y=%e\n", x, y);
//	return 0;
//}

//  while(0)表示错误，永远不会执行，其余的非零数都表示正确，会永远循环下去


//int main()
//{
//	float x;
//	int max, min, sum, mean, sum_of_squares, variance;
//	int count = 0;
//	printf("Enter the numbers:  ");
//	scanf("%f", &x);
//	if (scanf("%f", &x) == EOF)
//	{
//		printf("0 data items read\n");
//	}
//	else
//	{
//		max = min = sum = x;
//		count = 1;
//		sum_of_squares = x * x;
//		while (scanf("%f", &x) != EOF)
//		{
//			count++;
//			if (x > max)
//			{
//				max = x;
//			}
//			if (x < min)
//			{
//				min = x;
//			}
//			sum = sum + x;
//			sum_of_squares = sum_of_squares + x * x;
//		}
//		printf(" % d data items read\n", count);
//		printf("maximum value read = % f\n", max);
//		printf("minimum value read = % f\n", min);
//
//		printf("sum of all values read = % f\n", sum);
//		mean = sum / count;
//		printf("mean = % f\n", mean);
//		variance = sum_of_squares / count - mean * mean;
//		printf("variance = % f\n", variance);
//		printf("standard deviation = % f\n", sqrt(variance));
//	}
//	return 0;
//}



// Lecture 6-7
//int main()
//{
//	FILE* fin = fopen("graph-in.txt", "r");
//	char c;
//	while (fscanf(fin, "%c", &c)!=EOF)
//	{
//		printf("%c", c);
//		int sum = 0;
//		fscanf(fin, "%d", &sum);
//		printf("\n");
//
//		for (int i = 1; i <= sum; i++)
//		{
//			printf("*");
//		}
//	
//	}
//	return 0;
//}
//int main()
//{
//	char c;
//	int i, vol;
//	FILE* fin = fopen("graph-in.txt", "r");
//	if (fin != NULL)
//	{
//		while (fscanf(fin, "%c", &c) != EOF)
//		{
//			do
//			{
//				printf("%c", c);
//				fscanf(fin, "%c", &c);   // fscanf有严格的输入格式要求，%c只能输入字符
//			} while (c != '\n');
//			printf("\n");
//			vol = 0;
//			fscanf(fin, "%d", &vol);
//			for (i = 1; i <= vol; i++)
//			{
//				printf("*");	
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int table[2][3] = { {1,2,3},{4,5,6} };
//	float a[3][3] = { {3.1,7.4,2.8},{1.9,6.3,9.8},{2.1,3.4,1.5} };
//	printf("\n%f %f %f %f \n", *(*(a + 2) + 1), *(*(a)+2), *(*(a + 1)), *(*(a)+1) + 3);
//	return 0;
//}


// 在for循环中的continue用法
//int main()
//{
//	int I;
//	for (I = 1; I <= 3; I++)
//	{
//		printf("%d\n", I);
//		if (I == 2)
//		{
//			continue;
//		}
//		printf("RODRI\n");
//	}
//	printf("PAUL GEORGE");
//	return 0;
//}


//int main()
//{
//	float x, sum = 0.0;
//	int count = 0;
//	while (scanf("%f", &x) != EOF)
//	{
//		if (x < 0.0)
//			continue;
//		sum = sum + x;
//		count++;
//	}
//	if (count > 0)
//	{
//		printf("average=%f\n", sum / count);
//	}
//	else
//	{
//		printf("罗德里逆足世界波");
//	}
//	return 0;
//}


// 找到素数
//int main()
//{
//	int n;
//	int i = 1;
//	int k = 0;
//	printf("Enter a number:  ");
//	scanf("%d", &n);
//	for (i = 2; i <= n ; i++)
//	{
//		for (k = 2; k <= i - 1; k++)
//		{
//			if (i % k == 0)
//				break;
//		}
//			if (k == i)
//				printf("%d ", i);
//		
//	}
//	return 0;
//}


// switch用法
//int main()
//{
//	int code = 4;
//	switch (code)
//	{
//	case 1:
//		printf("LEWANDOWSKI");
//		break;
//	case 2:
//		printf("PAUL GEORGE");
//		break;
//	case 3:
//		printf("RODRI");
//		break;
//	case 4:
//		printf("Choupo-Moting\n");
//		break;
//	default:
//		printf("Antetoukunmpo");
//		break;
//	}
//	return 0;
//}



// 强制转换
//int main()
//{
//	int x1 = 3;
//	int x2 = 4;
//	float y1, y2;
//	y1 = x1 / x2;
//	y2 = (float)x1 / (float)x2;
//	printf("y1= %f, y2= %f ", y1, y2);
//	return 0;
//}


// getchar 和 putchar

//  之前的
//scanf("%c", &c);
//printf("%c", c);

// 现在的
//c = getchar();
//putchar(c);



//  注意看output 的结构，别忘了写 \n
//  分号，括号不能漏
//  选择题一定要注意括号，如果while或if没加括号，说明其下面只有一行语句被执行，此时如果有printf则只输出最后一次循环的结果
//   指针一定要看清类型，char还是int，不相同的如果要使用就强制转换
//  素数（√），阶乘(√），斐波那契（√），strlen函数写法（√），进制转化（√），冒泡排序(√），汉诺塔，青蛙跳台阶，指针实现交换（√）




//#include <stdio.h>
//#include <string.h>
//
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str1[] = "hello";
//    char str2[] = "world";
//    int result = strcmp(str1, str2);
//    if (result < 0) {
//        printf("str1 is less than str2");
//    }
//    else if (result > 0) {
//        printf("str1 is greater than str2");
//    }
//    else {
//        printf("str1 is equal to str2");
//    }
//    return 0;
//}

//int main() {
//	char dest[20] = "hello";
//	char src[] = "world";
//	strncat(dest, src, 3);
//	printf("%s", dest); // 输出"hellowor”
//	return 0;
//}

//int main()
//{
//	char arr[] = "GEORGE";
//	int sum = sizeof(arr);
//	printf("%d", sum);
//}







//int main()
//{
//	FILE* fin = fopen("GEORGE.txt", "r");
//	char c;
//	char str[100];
//	fscanf(fin, "%c", &c);
//	printf("%c", c);
//	fscanf(fin, "%c", &c);
//	printf("%c", c);
//	fscanf(fin, "%c", &c);
//	printf("%c", c); fscanf(fin, "%c", &c);
//	printf("%c", c);
//	/*while (fscanf(fin,"%c",&c)!= EOF)
//	{
//		printf("%c", c);
//	}*/
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    FILE* fp = fopen("GEORGE.txt", "r");
//    char str[20];
//    int num1, num2;
//    fscanf(fp, "%s %d %d", str, &num1, &num2);
//    printf("%s %d %d", str, num1, num2);
//    return 0;
//}
//int main()
//{
//	char s[] = "GEORGE";
//	const char* ptr = s;
//	ptr = "CHOUPO-MOTING";
//	printf("%c", *ptr);
//	return 0;
//}


//int fun(int*);
//int i;
//int main()
//{
//	int i, k;
//	float j;
//	i = 2;
//	k = fun(&i) / 4;
//	printf("%d\n", k);
//	return 0;
//}
//int fun(int* j)
//{
//	int i;
//	*j = *j + 1;
//	i = 1 + ++ * j;
//	return(i + (*j)--);
//}


//double GEORGE(char sp)
//{
//	switch (sp)
//	{
//	case 'B':
//		return 0.0;
//		break;
//	case 'N':
//		return 1.0;
//		break;
//	case 'R':
//		return 2.0;
//		break;
//	case 'O':
//		return 3.0;
//		break;
//	case 'Y':
//		return 4.0;
//		break;
//	case 'G':
//		return 5.0;
//		break;
//	case 'E':
//		return 6.0;
//		break;
//	case 'V':
//		return 7.0;
//		break;
//	case 'A':
//		return 8.0;
//		break;
//	case 'W':
//		return 9.0;
//		break;
//	}
//}
//double Rodri(double x, double y, double z)
//{
//	double R = 0.0;
//	R = (10.0 * x + y) * pow(10.0, z);
//	return R;
//}
//int main()
//{
//	double R = 0.0;
//	char color1, color2, color3;
//	double x, y, z = 0.0;
//	printf("Enter 3 codes : ");
//	scanf("%c%c%c", &color1, &color2, &color3);
//	x = GEORGE(color1);
//	y = GEORGE(color2);
//	z = GEORGE(color3);
//	R = Rodri(x, y, z);
//	printf("Resistance in Ohms: %lf", R);
//}



//int main()
//{
////#define square(x) (x)*(x)
////	int a = 3;
////	int b = square(a++);
////	int c = (a++) * (a++);
////	printf("%d\n", b);
////	printf("%d", c);
//#define TIMES2( num ) 2*num
//	int a = TIMES2(4 + 5);
//	int b = TIMES2((4 + 5));
//	printf("%d", a);
//	printf("%d", b);
//
//	return 0;
//}


//int GEORGE(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0' && *end != '\n')
//	{
//		end++;
//	}
//	return end - start;
//}
//int SM(char* str, int size)
//{
//	int k = 0;
//	int i = 0;
//	char arr1[2048] = { 0 };
//	char* p1 = arr1;
//	for (i = size - 1; i >= 0; i--)
//	{
//		*(p1 + k) = *(str + i);
//		k++;
//	}
//	for (k = 0; k < size; k++)
//	{
//
//		printf("%c", *(p1 + k));
//	}
//	//printf("Reversed string : %s",arr1);
//}
//int main()
//{
//	char c;
//	printf("Enter a string :");
//	scanf("%s", &c);
//	int size = GEORGE(c);
//	SM(c, size);
//	return 0;
//}



//int main()
//{
//	float table[2][3] = { {1.1,1.2,1.3},{2.1,2.2,2.3} };
//	int n = *(table + 1);
//
//	return 0;
//}


//int main()
//{
//	float f, c;
//	f = 64.0;
//	c = (5.0 / 9.0) * (f - 32.0);
//	printf("%f", c);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	a = 0100;  // 8进制数，为10进制下的64
//	b = a + 20;
//	printf("%d", a);
//	printf("%d", b);
//	return 0;
//}

//void main()
//{
//	int a = 7, b = 7, c, d;
//	a = a++;
//	printf("%d", a);
//}


//int main()
//{
//	int i = 3;
//	int k = (++i) + (++i) + (++i);
//	printf("%d", k);
//	printf("%d", i);
//
//	return 0;
//}


//int main()
//{
//	int a = 2, b = 9;
//	int k = a + (++b / ++a);
//	printf("%d", k);
//	return 0;
//}


//int main()
//{
//	double a = 123.456;
//	double b = 1.23e6;
//	printf("%e\n", a);
//	printf("%lf", b);
//
//	return 0;
//}

//int main()
//{
//	char a, b, c;
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	printf("Enter :");
//	scanf("%d%d%d", &a, &b, &c);
//	int sum = a + b + c;
//	printf("%d", sum);
//	return 0;
//}

//void f(int v, int w)
//{
//	int t;
//	t = v;
//	v = w;
//	w = t;
//}
//int main()
//{
//	int x = 1, y = 3, z = 2;
//	f(y, z);
//	printf("%d %d %d", x, y, z);
//}


//int main()
//{
//	int a[3][3] = { {1,2},{3,4},{5,6} }, i, j, s = 0;;
//	for (i = 1; i < 3; i++)
//		for (j = 0; j <= i; j++)
//			s = s + a[i][j];
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	int n[5] = { 0,0,0 }, i, k = 2;
//	for (i = 0; i < k; i++)
//		n[i] = n[i] + 1;
//	printf("%d\n", n[k]);
//	return 0;
//}


//int main()
//{
//	float f = f + 1.1;
//	printf("%f", f);
//	return 0;
//}


//int main()
//{
//	int a = 2, b = 5;
//	printf("a=%%d, b=%%d \n", a, b);
//}

//int main()
//{
//	char s[100];
//	int c, i;
//	scanf("%c", &c);
//	scanf("%d", &i);
//	scanf("%s", s);
//	printf("%c %d %s", c, i, s);
//}


//int main()
//{
//	char c1, c2, c3, c4, c5, c6;
//	scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//
//
//}


//int main()
//{
//	int m, n, p;
//	scanf("m=%dn=%dp=%d", &m, &n, &p);
//	printf("%d%d%d\n", m, n, p);
//}


//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int x = 35;
//	if (!a)
//		x--;
//	else if (b);
//	if (c)
//		x = 3;
//	else
//		x = 4;
//	printf("%d", x);
//}


//int main()
//{
//	int i;
//	for (i = 1; i < 40; i++)
//	{
//		if (i++ % 5 == 0)
//			if (++i % 8 == 0)
//				printf("%d", i);
//	}
//}


//int main()
//{
//	float a = 3.6, b = 2.4, c;
//	c = a / b;
//	printf("%f", c);
//}


//int main()
//{
//	int a = 5, b = 6, c = 7, d = 8, m = 2, n = 2;
//	printf("%d", ((m = a > b) && (n = c > d)));
//}

//int main()
//{
//	int x = 1, y = 4, z = 14;
//	int m = x - !y - y <= z * z / 6 > y;
//	printf("%d", m);
//}

//int main()
//{
//	float x = 2.2;
//	if (x++ > 3)
//	
//		printf("too big x=%f\n", x);
//	else
//		printf("too small x=%f\n", x);
//	
//}


//int main()
//{
//	int x;
//	for (x = 3; x < 6; x++)
//		printf((x % 2) ? ("**%d") : ("##%d\n"), x);
//}


//int main()
//{
//	int x = 10, y = 10, i;
//	for (i = 0; x > 8; y = ++i)
//		printf("%d %d ", x--, y);
//}


//int main()
//{
//	int i, s = 0;
//	for (i = 1; i < 10; i += 2)
//		s += i + 1;
//	printf("%d", s);
//	return 0;
//}


//int main()
//{
//	int i, n = 0;
//	for (i = 2; i < 5; i++)
//	{
//		do
//		{
//			if (i % 3)
//				continue;
//			n++;
//		} while (!i);
//		n++;
//	}
//	printf("%d", n);
//	return 0;
//} 


//int main()
//{
//	char str[] = { '\064' };
//	char str[] = "\0";
//	char str = "\x43";
//	char c = '97';
//
//	char c = 97;
//}


//int main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 9;
//	if (n++ >= 10)
//		printf("罗德里");
//	else
//		printf("莱万多夫斯基");
//	return 0;
//}

//int main()
//{
//	int k = 10;
//	while (k = 0)
//		k = k - 1;
//}

//int i;
//void prt()
//{
//	for (int i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//}
//int main()
//{
//	for (int i = 5; i <= 8; i++)
//		prt();
//	return 0;
//}


//# define ADD(x) x*x
//int main()
//{
//	int a = 4, b = 6, c = 7, d = ADD(a + b) * c;
//	printf("%d", d);
//}


//int main()
//{
//	char arr[7] = "ECE3310";
//	printf("%s", arr);
//	return 0;
//}



struct NODE {
	int data;
	struct NODE* next;
};
int main()
{
	struct NODE** GEORGE;
	int pp;
	struct NODE* a1 = (struct NODE*)malloc(sizeof(struct NODE));
	struct NODE* a2 = *GEORGE;
	a1-> data = pp;
	a1->next = NULL;
	if (*GEORGE == NULL)
	{
		*GEORGE = a1;
		return 0;
	}
	while (a2->next != NULL)
	{
		a2 = a2->next;
	}
	a2->next = a1;
	
	return 0;
}
