#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// ����
//int main()
//{
//	int arr1[10] ;
//	int arr3[10] = {1,2,3};  // ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5];    // ��������Ϊ���� 
//	return 0;
//}

//int main()
//{
//	char arr4[] = "LEWANDOWSKI";
//	printf("%d\n", sizeof(arr4));   // sizeof����arr4��ռ�ռ��С������\0
//	printf("%d\n", strlen(arr4));   // strlen���ַ������ȣ�������\0
//	return 0;
//}


// �±�����    -1
//int main()
//{
//	char arr[] = "LEWANDOWSKI";
//	printf("%c\n", arr[4]);    // �±�Ϊ4��ʵ�ʴ�ӡ�������ǵ�����ַ�
//	return 0;
//} 


//int main()
//{
//	int i = 0;
//	char arr[] = "LEWANDOWSKI";
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);    // �����а���\0
//	printf("%d\n", sz);
//	while (i < 11)
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);   // �õ�ַ���ź�ָ���ҵ�������ڴ�λ�ã��������ڴ�����������ŵ�
//	}
//	return 0;
//}


// ��ά����
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };    // 3��4��  ��0�е�1�С����� ���Ǵ�0��ʼ
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)     // for��Ƕ�״�ӡ��ά��������
//		{
//			/*printf("%d  ", arr[i][j]);*/
//			printf("%p ", &arr[i][j]);   // ��ӡ��ַ
//		}
//		printf("\n");
//	}
//	return 0;
//}





void GEORGE(int arr[], int sz)
{
	// ����ȷ��ð��������Ҫ�Ĵ���
	int i = 0;
	int LEWANDOWSKI = 1;             // �����������������Ϊ1
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int k;
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
				LEWANDOWSKI = 0;      // �������������������Ϊ0
			}
		}
		if (LEWANDOWSKI == 1)
		{  
			break;
		}
	}

}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	// ��arrת������������
	int i = 0;
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	GEORGE(arr, sz);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);   // arrֻ�����һ�����ֵĵ�ַ
//	printf("%p\n", &arr[0]);  
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);   // &arr������������ĵ�ַ
//	return 0;
//}



//int main()
//{
//	float acceleration, distance;
//	int time;
//	printf("Enter next time :");
//	scanf("%d", &time);
//	printf("Enter next acceleration: ");
//	scanf("%f", &acceleration);
//	while (time >= 0)
//	{
//		distance = time * 14 + acceleration * time * time / 2;
//		printf("Time= %d hours\n", time);
//		printf("Distance= %f kilometers\n\n", distance);
//		printf("Enter next time :");
//		scanf("%d", &time);
//		printf("Enter next acceleration: ");
//		scanf("%f", &acceleration);
//	}
//	if (time < 0)
//		printf("***End the Program***");
//	return 0;
//}