#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//// ����
//int ADD(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;          // return z ����Ҫ
//}
//int main()
//{
//	int a = 10;
//	int b = 50;
//	int sum;
//	sum = ADD(a, b);
//	printf("The sum is :%d",sum);
//	return 0;
//}


// 1. �⺯��
//// strcpy�������
//int main()
//{
//	char arr1[] = "LEWANDOWSKI";
//	char arr2[50] = "Mbappe is better than Messi";
//	strcpy(arr2, arr1);     // strcpy(Ŀ�ĵأ���Դ�أ�
//	printf("%s\n", arr2);
//	return 0;
//}


//// memset �ڴ�����
//int main()
//{
//	char arr[] = "HE is my favourite player";
//	memset(arr, 'IT', 2);   // memset(Ҫ�滻�����飬'�滻����',�滻������
//	printf("%s\n", arr);
//	return 0;
//}


// 2. �Զ��庯��
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 250;
//	int b = 500;
//	int max;
//	max = MAX(a, b);
//	printf("The bigger value is : %d", max);
//	return 0;
//}


// ����ָ����ɽ������ݵĲ���
//void SWAP(int* pa, int* pb)       // �������ָ���޷�������񣬵����������main������ֱ���ö����������庯������Բ���ָ��
//{                                   // void��ʾ�յ���˼����˼������Զ��庯������Ҫ����ֵ������дreturn x����
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 50;
//	int b = 250;
//	SWAP(&a, &b);    // ��ȡ��ַ����ȡa��b�ĵ�ַ
//	printf("a= %d b= %d", a, b);
//	return 0;
//}




// �����Ĳ���
// ʵ�Σ���main�����¶���Ĳ���  �βΣ����Զ��庯���ж���Ĳ������ں����ⲻ����
// �����ĵ��� ����ֵ���úʹ�ַ���� ����ַ���ü���ָ�룩



// ��ӡ100-200֮�������
//int is_prime(int n)    // ����������1
//{
//	int j;
//	for(j = 2; j < n+1; j++)
//	{
//		if (n % j == 0)
//			return 0;
//		if (j == n)
//			return 1;
//	}
//
//}
//int main()
//{
//	int i;
//	int sum;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d  ", i);
//	}
//	return 0;
//}


// �ж�ĳһ���Ƿ�Ϊ����
//int GEORGE(int i)
//{
//	if (i % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y;	
//	printf("Enter a year :");
//	scanf("%d", &y);
//	if (GEORGE(y) == 1)
//		printf("It is ����");
//	else
//		printf("��������");
//}



 //�ú�����д���ַ�������
//int LEWANDOWSKI(int arr[], int k,int sz)
//{                                 // �����ú���ʱ���������ܰ������飬���Ҫ��������Ϊ���������һ���֣���ֻ�᷵�ظ������һ�����ĵ�ַ����ʱ��arrΪָ�� 
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			return mid;     // �����±ֱ꣬�����
//		}          // ��Ҫ�Ҽ�break
//	}
//	return -1;
//}
//
//int main()           // ����ҵ��˾ͷ�����������±꣬�Ҳ����ͷ���-1
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);    //��ǰ�������Ԫ�ظ���
//	int ret = LEWANDOWSKI(arr, k,sz);
//	if (ret == -1)
//		printf("������");
//	else
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	return 0;
//}



// ÿ����һ�κ�����ʹnum����1
//void ADD(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num= %d\n", num);
//	ADD(&num);
//	printf("num= %d\n", num);
//	ADD(&num);
//	printf("num= %d\n", num);
//}



// ����Ƕ�� ��ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));    // ���Ϊ4321��printfǶ�׺��ʾ��ӡ�����ָ���
//	return 0;
//}

// �����Լ�������Դ�ļ���д�ĺ��� �� #include "add.h"  ���ü�����


//// �����ĵݹ�   �Լ������Լ�
//int main()
//{
//	main();             // ���ֺ�����һֱ������ȥ����Ϊû��������������stack overflow
//	return 0;
//}


//// �����ֲ��ÿ������   1234��1 2 3 4
//void print(int i)
//{
//	if (i > 9)
//	{						 // �ݹ���Ҫ���������������㲻�ټ���
//		print(i / 10);       // print�е���print������ִ��if����ֱ�������㣬��������������ǵݹ�
//	}
//	printf("%d  ", i % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("Enter a number : ");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}




//int GEORGE(char*str)
//{
//	if (*str != '\0')              // �õݹ�ķ�ʽ�����ͬ�����˼·һ�������»�С��LEWANDOWSKI��1+EWANDOWSKI��1+1+WANDOWSKI������
//	{
//		return 1+ GEORGE(str + 1);
//	}
//	else
//		return 0;
//}
//int GEORGE(char* str)
//{
//	int count = 0;
//	while (*str != '\0')   // �ַ������һλΪ\0, ��ָ��һ��һ���ش�ǰ�����ң�str����λ������*str�����λ�ö�Ӧ���ַ�
//	{                       // ��*�ŵı�ʾ�ַ����������ʾ��λ
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "LEWANDOWSKI";
//	int len = GEORGE(arr);
//	printf("len= %d ", len); 
//	return 0;
//}



// �׳˵ĵݹ���ʽ
//int LEWANDOWSKI(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i * LEWANDOWSKI(i - 1);
//}

//int LEWANDOWSKI(int k)
//{
//	int i;
//	int ret = 1;
//	for (i = 1; i <= k; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n;
//	int GEORGE;
//	printf("Enter a number : ");
//	scanf("%d", &n);
//	GEORGE = LEWANDOWSKI(n);
//	printf("%d", GEORGE);
//	return 0;
//}


// 쳲����� 
//int LEWANDOWSKI(i)          // ��ʱ��while�ȵݹ��ö�
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//}

//int LEWANDOWSKI(i)
//{
//	int r = 1;
//	if (i <= 2)
//		return 1;
//	else
//		return LEWANDOWSKI(i - 2) + LEWANDOWSKI(i - 1);             // ��ִ������������ǳ�����
//
//}
//int main()
//{
//	int n;
//	int GEORGE;
//	printf("Enter a number :");
//	scanf("%d", &n);
//	GEORGE = LEWANDOWSKI(n);
//	printf("%d", GEORGE);
//	return 0;
//}



