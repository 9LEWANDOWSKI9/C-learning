// 分支和循环
// 1. 顺序结构 2. 循环结构  3. 选择结构
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
// 选择结构 if的结构 if(...)
// if else 语句
//int main()
//{
//	int a = 50;
//	if (a < 10)
//		printf("董郭玺是女神\n");
//	else if (a >= 10 && a < 25)
//		printf("范李想是女神\n");
//	else if (a >= 25 && a < 60)
//		printf("好像也没什么特别惊艳的人了");
//	return 0;
//}


//// 用if语句只能控制一条选择，如果控制多个，必须用代码块，即加大括号
//// 例如
//int main()
//{
//	int a = 10;
//	if (a < 20)
//	{
//		printf("董郭玺是女神\n");
//		printf("谁也比不上我记忆中17岁的你，现在的你也不行\n");
//	}
//	return 0;
//}							 //  注意if和最近的else为一组，并不是对齐的if 和 else为一组
 

// 牢记 ==为判断数值相等  =为赋值
//  方法：如果用if判断数值是否相等，可以 if (5==a), 将数字写在等号的左边，变量写在右边，这样如果只写了一个等号，就会报错



//int main()
//{
//	int i = 1;
//	while (i > 0 && i <= 100)
//	{
//		if (i%2== 1)        // 不要提前定义 a=i%2
//			printf("%d\n", i);
//       i = i + 1;
//	}
//	return 0;
//}


//
//int main()
//{
//	int i = 1;
//	int a;
//	while (i > 0 && i <= 100)
//	{
//		a = i % 2;              // 如果要提前定义 a=i%2， 则将其放到while循环内部，不要放在外面，会导致if语句不再具备选择判断能力
//		if (a == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



// switch 语句，后面大部分加break，用于跳出switch语句
//int main()
//{
//	int day = 0;
//	printf("Enter a day number : ");
//	scanf("%d", &day);         //  scanf不要加\n ！！！！！
//	switch (day)              // switch后面的变量必须是整型
//	{
//	case 1:               //case后面也必须为整型
//			printf("星期一");
//			break;
//	case 2:
//			printf("星期二");
//			break;
//	case 3:
//		    printf("星期3");
//			break;
//	case 4:
//		    printf("星期4");
//		 	break;
//	case 5:
//		    printf("星期5");
//			break;
//	case 6:
//		    printf("星期6");
//			break;
//	case 7:
//		    printf("星期7");
//			break;
//	} 
//	return 0;
//}


//
//int main()
//{
//	int day;
//	printf("Enter a day number : ");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("摆烂日\n");
//		break;
//	default :                // 让代码更加完整，即使输入了范围之外的数字也能有输出，用default语句+break
//		printf("输入的值超过范围\n");
//		break;
//     }
//	return 0;
//}


//
//int main()   //注意break的逻辑，没有break就会一直进行下去
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:	
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)    //switch 可以被嵌套，switch里也可以加if函数
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\nn=%d\n", m, n);
//	return 0;
//}



// while循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;          // 加了break后就停止
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;          // 加了continue后变为死循环,只会输出1234，就停止
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//// 另一种关于continue的情况
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;          // 此时不会输出5，因为被死循环掉
//		printf("%d\n", i);
//	}
//	return 0;
//}



//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);    // 用两种方法输出字符     %s表示字符串char
//	return 0;
//}
//



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)    // !=表示不等于的意思
//	{
//		putchar(ch);
//	}
//	return 0;       // 如果想终止输出，用ctrl+z
//}



//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码 ： >");
//	scanf("%s", password);
//	// 此时输完密码后一定会按回车，此时就会在缓冲区留下一个\n，导致影响下面的语句
//	getchar();
//	printf("请确认（Y\N）");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
// }



////用while循环来优化代码，使得不论输入的密码是什么答辩都不会有问题
//int main()
//{
//	int ret = 0;
//	int ch;
//	char password[20] = { 0 };
//	printf("请输入密码 ： >");
//	scanf("%s", password);
//	// 此时输完密码后一定会按回车，此时就会在缓冲区留下一个\n，导致影响下面的语句
//	while ((ch = getchar()) != '\n')
//	{
//		;      // while内部如果不需要使用语句直接写一个分号
//	}
//	printf("请确认（Y\N）");
//	ret = getchar();
//	if (ret == 'Y')          // 单引号表示字符
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
//}



//// for循环
//int main()
//{
//	int i;
//	for (i = 1; i <11; i++)   // for循环结构 初始语句条件;判断语句;调整      //  建议写成 i<11 而不是 i<=10
//	{
//		printf("%d", i);       // 若里面用if+continue不会死循环
//	}
//	return 0;
//}



// do while 循环
//int main()
//{
//	int i = 1;
//	do                 //do while 至少做一次循环
//	{
//		printf("%d ", i);     // 不加大括号do下面就只能跟一个语句
//		i++;
//	}
//	while (i < 11);
//	return 0;
//}



////  n的阶乘
//int main()
//{
//	int n;
//	int i = 1;
//	int GEORGE = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		GEORGE = GEORGE * i;
//		i++;
//	}
//	printf("The answer is : %d", GEORGE);
//	return 0;
//}



// 计算1！+2！+...+10！
//int main()
//{
//	int n;
//	int i;
//	int sum=0;
//	for (n = 1;n < 4; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//
//		sum = sum + ret;
//	}
//		printf("%d", sum);
//	return 0;
//}


//// 优化
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;       // 此时因为ret被定义在了for循环外面，所以每次循环ret不会重置
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



// 在数组中找到某一个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);      // 用这个方法来判断arr数组中的元素个数
//	while (i < size)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标为：%d\n", i);
//			break;
//		}
//		i++;
//	}
//	if (i == size)
//		printf("无");
//	return 0;
//}



//// 折半查找法的代码   用下标的方式算   二分法
//int main()
//{
////	int left = 0; //左下标
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", size);
//	int right = size - 1;
//	while (left <= right)          // 说明中间有元素可以查找
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("下标为：%d\n", mid);
//			break;       // 写while循环别忘了写break
//		}
//	}
//	if (left > right)
//		printf("犯病了");
//	return 0;
//}


//
//int main()
//{
//	char arr1[] = "PAUL GEORGE IS MY HERO !!!";
//	char arr2[] = "##########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;   
//	 int right = sizeof(arr1)/sizeof(arr1[0]) -2 
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(200);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("PAUL GEORGE IS MY HERO !!!");
//	return 0;
//}



// 输入密码
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	while (i < 3)
//	{
//		printf("Enter the password :");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)        // =不能用来比较两个字符串是否相等，应该用函数strcmp,如果相等则=0
//		{
//			printf("输入成功");
//			break;
//		}
//		else
//			printf("滚蛋\n");
//		i++;
//	}
//	if (i == 3)
//		printf("滚蛋");
//	return 0;
//}