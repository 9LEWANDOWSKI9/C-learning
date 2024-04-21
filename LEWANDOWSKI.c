#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

// Lec 16  I/O
#include <stdio.h>


//int main() {
//    char name[100];
//    int age;
//
//    printf("Enter your name: ");
//    scanf("%*[^\n]");  // 跳过输入中的所有字符，直到遇到换行符
//    scanf("%*c");  // 跳过换行符
//
//    printf("Enter your age: ");
//    scanf("%d", &age);
//
//    printf("Name: %s\n", name);
//    printf("Age: %d\n", age);
//
//    return 0;
//}
int main()
{
	char name[100];
	int age;
	printf("lewandowskiiiii");
	scanf("%*[^\n]");
	m.a = 10;
}
typedef struct {
	int a;
	int b;
}geofge;
geofge m;

//#include <stdio.h>
//
//int main() {
//	char str[100];
//	int num = 10;
//	float pi = 3.14;
//
//	sprintf(str, "The value of num is %d and the value of pi is %.2f", num, pi);
//
//	printf("%s\n", str);
//
//	return 0;
//}



// 实现复数的加减
//#include <stdio.h>
//struct complex
//{
//	double real;
//	double imag;
//};
//struct complex add(double i1, double j1, double i2, double j2,struct complex*result)
//{
//	result->real = i1 + i2;
//	result->imag = j1 + j2;
//	return *result;
//}
//struct complex sub(double i1, double j1, double i2, double j2, struct complex* result)
//{
//	result->real = i1 - i2;
//	result->imag = j1 - j2;
//	return *result;
//
//}
//int main()
//{
//	struct complex a1 = { 0.0,0.0 };
//	struct complex a2 = { 0.0,0.0 };
//	struct complex result = { 0.0,0.0 };
//	int i = 0;
//	printf("Enter a1: ");
//	scanf("%lf%lf", &a1.real, &a1.imag);
//	printf("Enter a2: ");
//	scanf("%lf%lf", &a2.real, &a2.imag);
//	printf("1 or 2: ");
//	scanf("%d", &i);
//	if (i == 1)
//	{
//		add(a1.real, a1.imag, a2.real, a2.imag, &result);
//		printf("Answer: %lf + %lfj", result.real, result.imag);
//	}
//	else
//	{
//		sub(a1.real, a1.imag, a2.real, a2.imag, &result);
//		printf("Answer: %lf - %lfj", result.real, result.imag);
//	}
//	return 0;
//}

//int main()
//{
//
//	int* ptr;
//	ptr = malloc(sizeof(int));
//	*ptr = 999;
//	ptr = malloc(sizeof(int));
//	*ptr = -777;
//	printf("%d", *ptr);
//
//}

//
//int k = 55;
//int main()
//{
//	int i = 1;
//	int j = 4;
//	int m;
//	int f(int);
//	m = f(i);
//	printf("%d%d%d", j, m, k);
//	return 0;
//}
//
//
//int f(int j)
//{
//	static int k = 2;
//	if (j < 3)
//	{
//		k = k + f(j + 1);
//	
//	}
//	return k;
//}


//int main()
//{
//	float a[2][3] = { {3.1,7.4,2.8},{1.9,6.3,9.8} };
//	printf("\n%f%f%f%f", *(*(a + 1) + 1), *(*(a)+1), *(*(a + 1)), *(*(a)+1) + 1);
//	return 0;
//}

//int main()
//{
//	int x = 2;
//	while (x--);
//	printf("%d", x);
//	return 0;
//}

//int main()
//{
//	int a = 5, b = 4, c = 3, d;
//	d = (a > b > c);
//	printf("%d", d);
//	return 0;
//}

//void swap(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//
//	*a = *b;
//
//	*b = temp;
//
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d %d", a, b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//                                                                                                 
//	return 0;
//}

//int main()
//{
//	char s[6] = { 'A','B','C','D','E' };
//	printf("%s", s);
//}


//int main()
//{
//	char* p = "%d, a=%d , b=%d\n";
//	int a = 111, b = 10, c;
//	c = a % b; p += 3;
//	printf(p, c, a, b);
//
//}

//int main()
//{
//	int a = 5 << 2;
//	printf("%d", a);
//}


//int main()
//{
//	int a;
//	printf("%d", (a = 3 * 5, a * 4, a + 5));
//	return 0;
//}


//int main()
//{
//	char* s1 = "AbDeG";
//	char* s2 = "AbdEg";
//	s1 += 2;
//	s2 += 2;
//	printf("%d", strcmp(s1, s2));
//}


//int main()
//{
//	char str[80];
//	char* p, max;
//	char* q = NULL;
//	p = str;
//	gets(p);
//	max = *(p++);
//	while (*p != '\0')
//	{
//		if (max < *p)
//		{
//			max = *p;
//			q = p;  // 做停留，记录此时最大值的位置
//		}
//		p++;
//	}
//	p = q;  // 定位回到记录的位置
//	while (p > str)
//	{
//		*p = *(p - 1);
//		p--;
//	}
//	*p = max;
//	puts(p);
//}


//int main()
//{
//	char arr[1024];
//
//	gets(arr);
//	int m = strlen(arr) - 1;
//	char max = arr[0];
//	for (int i = 1; i < m+1; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	int k = 1;
//	for (int j = 0; j < m; j++)
//	{
//		if (arr[j] != max)
//		{
//			arr[k] = arr[j];
//			k++;
//		}
//	}
//	arr[0] = max;
//	puts(arr);
//	return 0;
//}


//int main()
//{
//	char arr[1024];
//	gets(arr);
//	int m = strlen(arr);
//	printf("%d", m);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,50 };
//	int pc = &arr[9] - &arr[2];
//	printf("%d", pc);
//	return 0;
//}

//#include <stdio.h>
//void main() {
//	char c = 'W';
//	char s[30] = "Ahab has an ivory leg";
//	int m = 23, n = 6;
//	double x = -12.356, y = 2.4, z = 9;
//	printf("%.2f%8.2f%-8.2f", x, x, x);
//	printf("%s\n", s + 11);
//	printf("%3c%-5d%+d\n\n%3.3f%*.3f", c, m, n, y, 7, z);
//}


//#include <stdio.h>
//float x = 32.0;
//void main() {
//	int x = 23;
//	float y;
//	float f(int);
//	printf("%d %f\n", x, f(x / 2));
//	y = f(x / 2);
//	printf("%d %f", x, y);
//}
//float f(const int n) {
//	static int k = 0;
//	x = x / 2.0;
//	k++;
//	return (x + n) / k;
//}

//#include <stdio.h>
//void main() {
//	char s[20] = ""; char c = 'A';
//	int m = 0, n = 0;
//	float x = 0.0, y = 0.0, z = 0.0;
//	FILE* fin;
//	fin = fopen("SB.txt", "r");
//	fscanf(fin, "%f%s%4c%f%*s", &x, s, &c, &y, s);
//	m = fscanf(fin, "%i%[ iysadr]%*f%3s", &n, s + 5, s + 12);
//	printf("%s %s %d\n", s, s + 7, n);
//	printf("%f %f %f\nAA%c%d\n", x, y, z, c, m);
//}


