 #define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

// 初始c语言

//int main()

//char ch = 'p'.
//printf("%c\n”，ch)://打印字符格式的数据

//int Lewandowski = 33;
//printf(”%d\n”，Lewandowski);//打印整型十进制数据

//%d-打印整型
//%c - 打印字符
//%f-打印浮点型数字(小数)
//%p-以地址的形式打印
 
//double GEORGE = 3.1415
//printf(”%lf\n”，GEORGE)

//printf("%d\n”，sizeof(char))， //看所占内存

	/*全局变量和局部变量*/

	
	// 计算两个数的和
//	 int city1 = 0;
//	 int city2 = 0;
//	int city = 0;  //在C语言中，所有的变量必须提前定义在代码块的最前面，不能在下面的代码里面随时定义随时用，int=0表示初状态
//	//用输入函数 scanf函数（scanf_s函数会进行边界检查，更加安全）
//	 scanf("%d%d",&city1,&city2); //&代表取地址符号 表示把哪个值放在哪个地址处
//	city = city1 + city2;
//	printf("city=%d\n", city);


//常量
	// 3; 字面常量，一个直接的值
	//const int Lewandowski=13  用const修饰的常变量，无法被改变，但Lewandowski的本质依旧是变量，有常属性
	// #define定义的标识符常量  结构：#define GEORGE 10
	// 枚举常量 关键：enum
//enum COLOR
//{
//	RED,
//	YELLOW,
//	BLUE
//};	 // 分号不可缺少，枚举常量放在大括号内，main函数之上
//int main()
//{
//		enum COLOR c = BLUE;
//		printf("%d\n", c); //此时输出的结果为2


//新章节：数组 字符串
//int main()
//{
//	//char arr1[] = "abc"; // 数组  "abc"有'a','b','c','\0', 其中\0为字符串结束的表示
//	//char arr2[] = { 'a','b','c'}; // 特别的 arr2[]={} 表示初始化数组  只有在最后面补一个0才会输出一致
//	//printf("%s\n", arr2);
//	//printf("%s\n", arr1);
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2)); //strlen函数：计算字符串的长度
//
//	//转义字符
//	// 例如\n表示换行的意思，不会再输出n   \t表示水平制表符（tab）
//	//printf("%d\n", strlen("c:\test\32\test.c")); // \32也是转义字符

	
//// 选择语句 if语句
//int main()
//{
//	int input = 0; //首先初始化输入变量
//	printf("德布劳内是世界第一中场吗？\n");
//	scanf("%d", &input); //一定要有输入，输入1或0来进行判断
//	if (input == 1)
//		printf("是的\n"); 
//	else
//		printf("肯定是\n");
//	return 0;
//}


// 循环语句 for while 
//int main()
//	{
//	int line = 0;
//	while (line < 10)
//	{
//		printf("LEWANDOWSKI\n");
//		line++;    //或者写成 line=line+1;
//	}               // 这里加大括号的意思是表示在这两个大括号内是while函数控制的循环语句，如果不加大括号，会一直循环下去，所以需要用大括号包起来while循环的内容
//	if(line>=10)
//	printf("Lewandowski是最好的中锋");
//		return 0;
//	}
//
////// 函数的结构
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;   //写在int main之上  牢记return z的写法，直接返回变量，而不是return0
//}


//// 数组
//int arr[3] = {1,2,3}; //定义一个存放10个整型数字的数组,用大括号表示要存放的数值
////char ch[20];
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int  i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//	/*printf("%d\n", arr[4]);*/ //用下标寻找元素，第一个元素下标为0，如果要输出第5个元素，则输入下标4
//	// 如果要输出全部的1-10， 用while循环
//}


// %表示取模   <<表示左移 二进制的左移 
// 各种操作符
// !=用于测试不相等   ==用于测试相等
// &&表示与  ||表示或
// exp1 ? exp2 : exp3 条件操作符  exp1为判断语句，为真则输出exp2，否则输出exp3


  // 在main之外定义函数 
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 100;
//	int b = 150;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//    return 0;
//}


//int test()
//{
//	int a = 1;
//	a = a + 1;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i = i + 1;      //结果会出来5个2，这里的i表示次数，与输出的值无关，输出的值只与所设定的test函数有关
//	}
//}


// 关键字 static  修饰局部变量，如果修饰全局变量或函数，则改变了变量的作用域，让其只能在自己所在源文件内部使用，不能在另外的.c文件中用extern调用
//int test()
//{
//	static int a = 1;   // 与上面的代码相比多了static， 这就表明了当在while循环中反复调用test函数，并不会对a进行重新的取1，而是沿用了上一次循环的值
//	a = a + 1;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i = i + 1;    
//	}
//}
//// extern int Add(int, int)



// 函数和宏
// 函数
//int Max(int x, int y)
//{
//	if (x > y)
//	    return x;
//	else
//		return y;
//}

////宏   用#define来做宏，后面跟三目标识符
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 200;
//	int b = 250;
//	int max = 0;
//	int max1 = 0;
//	// 函数
//	max = Max(a, b);
//	printf("%d\n", max);
//	//宏
//	max1 = MAX(a, b);
//	printf("%d\n", max1);
//	return 0;
//}



////指针  取地址符号
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a; //&符号为取地址符号，int*表示储存地址,意思为将a的地址存到p里,存放地址的变量成为指针变量(p)
//	printf("%p\n", &a); //%p为取地址
//	printf("%p\n", p);
//	*p = 20;  //*为解引用操作符，通过这样可以找到a的地址，并将其内容改为20
//	printf("%d\n", a);
//}

//int main()
//{
//	char ch = 'L';
//	char* pc = &ch;
//	*pc = 'G';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int g = 50;
//	int* lx = &g;
//	printf("%p\n", lx);
//	*lx = 250;
//	printf("%d\n", g);
//	return 0;
//}


//int main()
//{
//	double l = 3.15;
//	double* pc = &l;
//	printf("%p\n", pc);
//	*pc = 2.5;
//	printf("%lf\n", l);
//	printf("%lf\n", *pc);
//	return 0;
//}


//结构体
// 创建一个结构体类型
//struct Book  //类型
//{
//	char name[20];//
//	short price;
//};  // 分号不可缺少！

//int main()
//{
//	struct Book b1 = { "保罗乔治",55 };
//	printf("书名:%s\n", b1.name);    // %s表示字符串 
//	printf("价格:%d元\n", b1.price);  //注意.name和.price的写法，其中name和price都是在main函数上面定义过的
//	b1.price = 250;
//	printf("修改后的价格为:%d元\n", b1.price); 
//	return 0;
//}


//// 利用指针的方法重复上述操作
//struct Book
//{
//	char name[30];
//	short price;
//};
//
//int main()
//{
//	struct Book b2 = { "莱万多夫斯基",250 };
//	// 此时利用指针找到b2所在的地址，用取地址符和指针变量
//	struct Book* pc = &b2;
//	printf("%s\n", (*pc).name);
//	printf("%d\n", (*pc).price);  // 用*对指针变量pc进行解引用操作
//	// 另一种方法 指针的指向关系
//	printf("%s\n", pc->name);
//	printf("%d\n", pc->price);
//	return 0;
//}


