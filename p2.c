// ��֧��ѭ��
// 1. ˳��ṹ 2. ѭ���ṹ  3. ѡ��ṹ
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
// ѡ��ṹ if�Ľṹ if(...)
// if else ���
//int main()
//{
//	int a = 50;
//	if (a < 10)
//		printf("��������Ů��\n");
//	else if (a >= 10 && a < 25)
//		printf("��������Ů��\n");
//	else if (a >= 25 && a < 60)
//		printf("����Ҳûʲô�ر��޵�����");
//	return 0;
//}


//// ��if���ֻ�ܿ���һ��ѡ��������ƶ���������ô���飬���Ӵ�����
//// ����
//int main()
//{
//	int a = 10;
//	if (a < 20)
//	{
//		printf("��������Ů��\n");
//		printf("˭Ҳ�Ȳ����Ҽ�����17����㣬���ڵ���Ҳ����\n");
//	}
//	return 0;
//}							 //  ע��if�������elseΪһ�飬�����Ƕ����if �� elseΪһ��
 

// �μ� ==Ϊ�ж���ֵ���  =Ϊ��ֵ
//  �����������if�ж���ֵ�Ƿ���ȣ����� if (5==a), ������д�ڵȺŵ���ߣ�����д���ұߣ��������ֻд��һ���Ⱥţ��ͻᱨ��



//int main()
//{
//	int i = 1;
//	while (i > 0 && i <= 100)
//	{
//		if (i%2== 1)        // ��Ҫ��ǰ���� a=i%2
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
//		a = i % 2;              // ���Ҫ��ǰ���� a=i%2�� ����ŵ�whileѭ���ڲ�����Ҫ�������棬�ᵼ��if��䲻�پ߱�ѡ���ж�����
//		if (a == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



// switch ��䣬����󲿷ּ�break����������switch���
//int main()
//{
//	int day = 0;
//	printf("Enter a day number : ");
//	scanf("%d", &day);         //  scanf��Ҫ��\n ����������
//	switch (day)              // switch����ı�������������
//	{
//	case 1:               //case����Ҳ����Ϊ����
//			printf("����һ");
//			break;
//	case 2:
//			printf("���ڶ�");
//			break;
//	case 3:
//		    printf("����3");
//			break;
//	case 4:
//		    printf("����4");
//		 	break;
//	case 5:
//		    printf("����5");
//			break;
//	case 6:
//		    printf("����6");
//			break;
//	case 7:
//		    printf("����7");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("������\n");
//		break;
//	default :                // �ô��������������ʹ�����˷�Χ֮�������Ҳ�����������default���+break
//		printf("�����ֵ������Χ\n");
//		break;
//     }
//	return 0;
//}


//
//int main()   //ע��break���߼���û��break�ͻ�һֱ������ȥ
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
//		switch (n)    //switch ���Ա�Ƕ�ף�switch��Ҳ���Լ�if����
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



// whileѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;          // ����break���ֹͣ
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
//			continue;          // ����continue���Ϊ��ѭ��,ֻ�����1234����ֹͣ
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//// ��һ�ֹ���continue�����
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;          // ��ʱ�������5����Ϊ����ѭ����
//		printf("%d\n", i);
//	}
//	return 0;
//}



//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);    // �����ַ�������ַ�     %s��ʾ�ַ���char
//	return 0;
//}
//



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)    // !=��ʾ�����ڵ���˼
//	{
//		putchar(ch);
//	}
//	return 0;       // �������ֹ�������ctrl+z
//}



//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������� �� >");
//	scanf("%s", password);
//	// ��ʱ���������һ���ᰴ�س�����ʱ�ͻ��ڻ���������һ��\n������Ӱ����������
//	getchar();
//	printf("��ȷ�ϣ�Y\N��");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
// }



////��whileѭ�����Ż����룬ʹ�ò��������������ʲô��綼����������
//int main()
//{
//	int ret = 0;
//	int ch;
//	char password[20] = { 0 };
//	printf("���������� �� >");
//	scanf("%s", password);
//	// ��ʱ���������һ���ᰴ�س�����ʱ�ͻ��ڻ���������һ��\n������Ӱ����������
//	while ((ch = getchar()) != '\n')
//	{
//		;      // while�ڲ��������Ҫʹ�����ֱ��дһ���ֺ�
//	}
//	printf("��ȷ�ϣ�Y\N��");
//	ret = getchar();
//	if (ret == 'Y')          // �����ű�ʾ�ַ�
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
//}



//// forѭ��
//int main()
//{
//	int i;
//	for (i = 1; i <11; i++)   // forѭ���ṹ ��ʼ�������;�ж����;����      //  ����д�� i<11 ������ i<=10
//	{
//		printf("%d", i);       // ��������if+continue������ѭ��
//	}
//	return 0;
//}



// do while ѭ��
//int main()
//{
//	int i = 1;
//	do                 //do while ������һ��ѭ��
//	{
//		printf("%d ", i);     // ���Ӵ�����do�����ֻ�ܸ�һ�����
//		i++;
//	}
//	while (i < 11);
//	return 0;
//}



////  n�Ľ׳�
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



// ����1��+2��+...+10��
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


//// �Ż�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;       // ��ʱ��Ϊret����������forѭ�����棬����ÿ��ѭ��ret��������
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



// ���������ҵ�ĳһ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);      // ������������ж�arr�����е�Ԫ�ظ���
//	while (i < size)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", i);
//			break;
//		}
//		i++;
//	}
//	if (i == size)
//		printf("��");
//	return 0;
//}



//// �۰���ҷ��Ĵ���   ���±�ķ�ʽ��   ���ַ�
//int main()
//{
////	int left = 0; //���±�
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", size);
//	int right = size - 1;
//	while (left <= right)          // ˵���м���Ԫ�ؿ��Բ���
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�±�Ϊ��%d\n", mid);
//			break;       // дwhileѭ��������дbreak
//		}
//	}
//	if (left > right)
//		printf("������");
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



// ��������
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	while (i < 3)
//	{
//		printf("Enter the password :");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)        // =���������Ƚ������ַ����Ƿ���ȣ�Ӧ���ú���strcmp,��������=0
//		{
//			printf("����ɹ�");
//			break;
//		}
//		else
//			printf("����\n");
//		i++;
//	}
//	if (i == 3)
//		printf("����");
//	return 0;
//}