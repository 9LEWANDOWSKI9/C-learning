 #define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

// ��ʼc����

//int main()

//char ch = 'p'.
//printf("%c\n����ch)://��ӡ�ַ���ʽ������

//int Lewandowski = 33;
//printf(��%d\n����Lewandowski);//��ӡ����ʮ��������

//%d-��ӡ����
//%c - ��ӡ�ַ�
//%f-��ӡ����������(С��)
//%p-�Ե�ַ����ʽ��ӡ
 
//double GEORGE = 3.1415
//printf(��%lf\n����GEORGE)

//printf("%d\n����sizeof(char))�� //����ռ�ڴ�

	/*ȫ�ֱ����;ֲ�����*/

	
	// �����������ĺ�
//	 int city1 = 0;
//	 int city2 = 0;
//	int city = 0;  //��C�����У����еı���������ǰ�����ڴ�������ǰ�棬����������Ĵ���������ʱ������ʱ�ã�int=0��ʾ��״̬
//	//�����뺯�� scanf������scanf_s��������б߽��飬���Ӱ�ȫ��
//	 scanf("%d%d",&city1,&city2); //&����ȡ��ַ���� ��ʾ���ĸ�ֵ�����ĸ���ַ��
//	city = city1 + city2;
//	printf("city=%d\n", city);


//����
	// 3; ���泣����һ��ֱ�ӵ�ֵ
	//const int Lewandowski=13  ��const���εĳ��������޷����ı䣬��Lewandowski�ı��������Ǳ������г�����
	// #define����ı�ʶ������  �ṹ��#define GEORGE 10
	// ö�ٳ��� �ؼ���enum
//enum COLOR
//{
//	RED,
//	YELLOW,
//	BLUE
//};	 // �ֺŲ���ȱ�٣�ö�ٳ������ڴ������ڣ�main����֮��
//int main()
//{
//		enum COLOR c = BLUE;
//		printf("%d\n", c); //��ʱ����Ľ��Ϊ2


//���½ڣ����� �ַ���
//int main()
//{
//	//char arr1[] = "abc"; // ����  "abc"��'a','b','c','\0', ����\0Ϊ�ַ��������ı�ʾ
//	//char arr2[] = { 'a','b','c'}; // �ر�� arr2[]={} ��ʾ��ʼ������  ֻ��������油һ��0�Ż����һ��
//	//printf("%s\n", arr2);
//	//printf("%s\n", arr1);
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2)); //strlen�����������ַ����ĳ���
//
//	//ת���ַ�
//	// ����\n��ʾ���е���˼�����������n   \t��ʾˮƽ�Ʊ����tab��
//	//printf("%d\n", strlen("c:\test\32\test.c")); // \32Ҳ��ת���ַ�

	
//// ѡ����� if���
//int main()
//{
//	int input = 0; //���ȳ�ʼ���������
//	printf("�²������������һ�г���\n");
//	scanf("%d", &input); //һ��Ҫ�����룬����1��0�������ж�
//	if (input == 1)
//		printf("�ǵ�\n"); 
//	else
//		printf("�϶���\n");
//	return 0;
//}


// ѭ����� for while 
//int main()
//	{
//	int line = 0;
//	while (line < 10)
//	{
//		printf("LEWANDOWSKI\n");
//		line++;    //����д�� line=line+1;
//	}               // ����Ӵ����ŵ���˼�Ǳ�ʾ������������������while�������Ƶ�ѭ����䣬������Ӵ����ţ���һֱѭ����ȥ��������Ҫ�ô����Ű�����whileѭ��������
//	if(line>=10)
//	printf("Lewandowski����õ��з�");
//		return 0;
//	}
//
////// �����Ľṹ
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;   //д��int main֮��  �μ�return z��д����ֱ�ӷ��ر�����������return0
//}


//// ����
//int arr[3] = {1,2,3}; //����һ�����10���������ֵ�����,�ô����ű�ʾҪ��ŵ���ֵ
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
//	/*printf("%d\n", arr[4]);*/ //���±�Ѱ��Ԫ�أ���һ��Ԫ���±�Ϊ0�����Ҫ�����5��Ԫ�أ��������±�4
//	// ���Ҫ���ȫ����1-10�� ��whileѭ��
//}


// %��ʾȡģ   <<��ʾ���� �����Ƶ����� 
// ���ֲ�����
// !=���ڲ��Բ����   ==���ڲ������
// &&��ʾ��  ||��ʾ��
// exp1 ? exp2 : exp3 ����������  exp1Ϊ�ж���䣬Ϊ�������exp2���������exp3


  // ��main֮�ⶨ�庯�� 
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
//		i = i + 1;      //��������5��2�������i��ʾ�������������ֵ�޹أ������ֵֻ�����趨��test�����й�
//	}
//}


// �ؼ��� static  ���ξֲ��������������ȫ�ֱ�����������ı��˱���������������ֻ�����Լ�����Դ�ļ��ڲ�ʹ�ã������������.c�ļ�����extern����
//int test()
//{
//	static int a = 1;   // ������Ĵ�����ȶ���static�� ��ͱ����˵���whileѭ���з�������test�������������a�������µ�ȡ1��������������һ��ѭ����ֵ
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



// �����ͺ�
// ����
//int Max(int x, int y)
//{
//	if (x > y)
//	    return x;
//	else
//		return y;
//}

////��   ��#define�����꣬�������Ŀ��ʶ��
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 200;
//	int b = 250;
//	int max = 0;
//	int max1 = 0;
//	// ����
//	max = Max(a, b);
//	printf("%d\n", max);
//	//��
//	max1 = MAX(a, b);
//	printf("%d\n", max1);
//	return 0;
//}



////ָ��  ȡ��ַ����
//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a; //&����Ϊȡ��ַ���ţ�int*��ʾ�����ַ,��˼Ϊ��a�ĵ�ַ�浽p��,��ŵ�ַ�ı�����Ϊָ�����(p)
//	printf("%p\n", &a); //%pΪȡ��ַ
//	printf("%p\n", p);
//	*p = 20;  //*Ϊ�����ò�������ͨ�����������ҵ�a�ĵ�ַ�����������ݸ�Ϊ20
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


//�ṹ��
// ����һ���ṹ������
//struct Book  //����
//{
//	char name[20];//
//	short price;
//};  // �ֺŲ���ȱ�٣�

//int main()
//{
//	struct Book b1 = { "��������",55 };
//	printf("����:%s\n", b1.name);    // %s��ʾ�ַ��� 
//	printf("�۸�:%dԪ\n", b1.price);  //ע��.name��.price��д��������name��price������main�������涨�����
//	b1.price = 250;
//	printf("�޸ĺ�ļ۸�Ϊ:%dԪ\n", b1.price); 
//	return 0;
//}


//// ����ָ��ķ����ظ���������
//struct Book
//{
//	char name[30];
//	short price;
//};
//
//int main()
//{
//	struct Book b2 = { "������˹��",250 };
//	// ��ʱ����ָ���ҵ�b2���ڵĵ�ַ����ȡ��ַ����ָ�����
//	struct Book* pc = &b2;
//	printf("%s\n", (*pc).name);
//	printf("%d\n", (*pc).price);  // ��*��ָ�����pc���н����ò���
//	// ��һ�ַ��� ָ���ָ���ϵ
//	printf("%s\n", pc->name);
//	printf("%d\n", pc->price);
//	return 0;
//}


