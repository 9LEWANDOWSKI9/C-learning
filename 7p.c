#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
// �ṹ��
// ����һ��ѧ��
//typedef struct STU
//{
//	char name[50];
//	short age;
//	char tele[12];
//	char sex[5];      // ����һ���ṹ������
//}STU;				// �ֺŲ��ܶ�
//int main()
//{
//    STU s;    // �����ṹ�����,�������д��typedef��STU�����ڴ˴�����дstruct STU����ֻһ��STU����
//	return 0;
//}



// �ṹ���а��������ṹ��
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




// �ṹ�崫��
//typedef struct STU
//{
//	char name[50];
//	short age;
//	char tele[12];
//	char sex[5];      // ����һ���ṹ������
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
//	STU s = { "LEWWANDOWSKI",34,"15421312112","��" };
//	print(s);    // ���ṹ��
//	GEORGE(&s);  // ��ָ�� ����Ϊ��
//	return 0;
//}






// ���ݵĴ洢
// �������ڴ����ò����

// ��Ƴ����жϻ������ֽ���
//int main()
//{
//	 // ����int a= 20��   &aΪ0x 00 00 00 14
//	 // С���ֽ���  14 00 00 00
//	//  ����ֽ���   00 00 00 14    �͵�ַ��>�ߵ�ַ
//	int a = 1;
//	char* p =(char*) & a;  // ��char������int��ԭ�򣺶�charȡ��ַʱ���һ���ֽڣ���int����ĸ��ֽ�      ǿ��ת������
//	if (*p == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//		printf("��˴洢\n");
//	return 0;
//}


// �ú����ķ����жϣ���ʱ��return 0��return 1
//int check()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//	// ����ֱ�� return *p
//}
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//		printf("С��");
//	else
//		printf("���");
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
//	FILE *fin, *fout;          // �ļ��������ָ��
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
//	char a = -128;     // charʼ��ռһ���ֽڣ�8������λ
//	printf("%u", a);   // �洢����  %d��ӡʮ�����з�������  %u��ӡʮ�����޷�������
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
//	unsigned char i = 0;      //  unsigned char��Χ��0-255
//	for (i = 0; i <= 255; i++)
//	{
//		printf("LEWANDOWSKI\n");
//	}
//	return 0;
//}



//int main()
//{
//	double b = 1E10;    // E����ָ������ʾ1*10^10
//	printf("%lf", b);
//	return 0;
//}