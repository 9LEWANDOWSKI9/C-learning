#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// ���������
//int main()
//{
//	int a = 5 / 2;	  // �õ���
//	int b = 5 % 2;    // �õ�����  ���߱��붼Ϊint
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
//	int c = a & b;   // &�ǰ�λ�����˼��2������
//	int d = a | b;   // |�ǰ�λ�����˼
//	int f = a ^ b;   // ^ ��ʾ��λ���
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", f);
//    return 0;
//}



// �ڲ�������������ʱ������ǰ���½�����������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	// �Ӽ����������ܻ����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	// ���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a= %d\nb= %d\n ", a, b);
//	return 0;
//}


// ͳ��num�Ĳ������ж��ٸ�1��ֻ�����������������ͼ��ˣ�
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



// �Ż�����
// 32��bitλ
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
//	if (a)     // ���aΪ��
//		printf("LEWANDOWSKI");
//	if (!a)    // ���aΪ��
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
//	/*printf("%d\n", ++a);*/    // ��++������a����ӡ����Ϊ11
//	printf("%d\n", a++);		// ����a����++����ӡ����Ϊ10
//	return 0;
//}


// ǿ��ת��
//int main()
//{
//	/*int a = 3.14;*/
//	int a = (int)3.14;   // ǿ��ת��
//	printf("%d", a);
//	return 0;
//}


// ��������Ŀ��������
// exp1 ? exp2 : exp3   ��˼�ǣ����exp1���������exp2���������������exp3
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
//	printf("%u\n", sizeof(c));			// %u���޷��ŵ�ʮ����������˼
//	printf("%u\n", sizeof(+c));    
//	printf("%u\n", sizeof(!c));
//    return 0;
//}