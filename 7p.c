#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
// 结构体
// 描述一个学生
//typedef struct STU
//{
//	char name[50];
//	short age;
//	char tele[12];
//	char sex[5];      // 定义一个结构体类型
//}STU;				// 分号不能丢
//int main()
//{
//    STU s;    // 创建结构体变量,如果上面写了typedef和STU，则在此处不用写struct STU而是只一个STU即可
//	return 0;
//}



// 结构体中包含其他结构体
//struct S
//{
//	int a;
//	char c;
//	char arr[50];
//	double d;
//};
//struct T
//{
//	char ch[50];
//	struct S s;
//	char* pa; 
//};
//int main()
//{
//	struct T t = { "LEWANDOWSKI",{100,'w',"PAUL GEORGE",2.5},NULL };
//	printf("%s\n", t.ch);
//	return 0;
//}




// 结构体传参
//typedef struct STU
//{
//	char name[50];
//	short age;
//	char tele[12];
//	char sex[5];      // 定义一个结构体类型
//}STU;	
//void print(STU tmp)
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.tele);
//	printf("%s\n\n", tmp.sex);
//}
//void GEORGE(STU* pc)
//{
//	printf("%s\n", pc->name);
//	printf("%d\n", pc->age);
//	printf("%s\n", pc->tele);
//	printf("%s\n", pc->sex);
//}
//int main()
//{
//	STU s = { "LEWWANDOWSKI",34,"15421312112","男" };
//	print(s);    // 传结构体
//	GEORGE(&s);  // 传指针 ，更为好
//	return 0;
//}






// 数据的存储
// 整形在内存中用补码存

// 设计程序判断机器的字节序
//int main()
//{
//	 // 对于int a= 20；   &a为0x 00 00 00 14
//	 // 小端字节序：  14 00 00 00
//	//  大端字节序：   00 00 00 14    低地址—>高地址
//	int a = 1;
//	char* p =(char*) & a;  // 用char而不用int的原因：对char取地址时向后一个字节，而int向后四个字节      强制转换！！
//	if (*p == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//		printf("大端存储\n");
//	return 0;
//}


// 用函数的方法判断，此时用return 0和return 1
//int check()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//	// 或者直接 return *p
//}
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}



//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d  %d  %d  ", a, b, c);
//	return 0;
//}


// 1^2!+2^2!+3^2!+.....
//int GEORGE(int k)
//{
//	int c = k * k;
//	return c;
//}

//int LEWANDOWSKI(int m)
//{
//	int t = 0;
//	int tt = 1;
//	for (t = 1; t < m + 1; t++)
//	{
//		tt = tt * t;
//	}
//	return tt;
//}

//int LEWANDOWSKI(int m)
//{
//	if (m <= 1)
//		return 1;
//	else
//		return m * LEWANDOWSKI(m - 1);
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i < 6; i++)
//	{
//		int a = GEORGE(i);
//		int b = LEWANDOWSKI(a);
//		sum = sum + b;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main()
//{
//	float mc, ph;
//	FILE *fin, *fout;          // 文件必须带有指针
//	fin = fopen("ph-infile.txt", "r");
//	fout = fopen("ph-outfile.txt", "w");
//	while (fscanf(fin, "%f", &mc) != EOF)
//	{
//		ph = -log10(mc);
//		fprintf(fout, "Molar concentration= %e\n", mc);
//		fprintf(fout, "PH=%f\n", ph);
//		if (ph < 7.0)
//			fprintf(fout, "Acid\n");
//		else if (ph > 7.0)
//			fprintf(fout, "Nonacid\n");
//		else
//			fprintf(fout,"neutual\n");
//	}
//	return 0;
//}	



//int main()
//{
//	char a = -128;     // char始终占一个字节，8个比特位
//	printf("%u", a);   // 存储补码  %d打印十进制有符号数字  %u打印十进制无符号数字
//	return 0;
//}



//int main()
//{
//	int i = -20;
//	unsigned j = 10;
//	printf("%d\n", i = j);
//	return 0;
//}


//int main()     
//{
//	unsigned char i = 0;      //  unsigned char范围是0-255
//	for (i = 0; i <= 255; i++)
//	{
//		printf("LEWANDOWSKI\n");
//	}
//	return 0;
//}



//int main()
//{
//	double b = 1E10;    // E代表指数，表示1*10^10
//	printf("%lf", b);
//	return 0;
//}