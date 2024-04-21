#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
//struct node
//{
//	int value;
//	int count;
//};
//void updatefrequency(struct node* frequency, int* numfrequencies, int value)
//{
//	for (int i = 0; i < *numfrequencies; i++)
//	{
//		if (frequency[i].value == value)
//			frequency[i].count++;
//		return;
//	}
//	struct node newnode = { value,1 };
//	frequency[*numfrequencies] = newnode;
//	(*numfrequencies)++;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int p[1000] = { 0 };
//	int v[1000] = { 0 };
//	int w = 0; // 位置坐标看多少个相等的
//	int count[1024] = { 0 };
//
//	for (int i = 0; i < n ; i++)
//	{
//		scanf("%d %d", &p[i], &v[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		w = p[j];
//		int count1 = 0;
//		for (int w = j+1; w < n; w++)
//		{
//			if (p[w] == w)
//			{
//				count1++;
//			}
//		}
//		count[j] = count1;
//	}
//	for (int w = 0; w < n; w++)
//	{
//		printf("%d",count[w]);
//	}
//
//
//
//	/*for (int j = 0; j < n; j++)
//	{
//		w = p[j];
//		for (int w = 0; w < n; w++)
//		{
//			for (int i = j + 1; i < n; i++)
//			{
//				if (p[i] == w)
//					count1++;
//			}
//			count[w] = count1;
//		}
//	}
//	for (int w = 0; w < n; w++)
//	{
//		printf("%d", count[w]);
//	}*/
//}
//struct cat
//{
//	int position;
//	int speed;
//};
//int compare(const void* a, const void* b)
//{
//	return ((struct cat*)b)->speed - ((struct cat*)a)->speed;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	struct cat* cats = malloc(n * sizeof(struct cat));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &cats[i].position, &cats[i].speed);
//	}
//	qsort(cats, n, sizeof(struct cat), compare);
//	int  maxgroupsize = 0;
//	int current = 0;
//	int last = cats[0].position;
//	for (int i = 0; i < n; i++)
//	{
//		if (cats[i].position > last)
//		{
//			last = cats[i].position;
//			current = 1;
//		}
//		else
//		{
//			current++;
//		}
//		if (current > maxgroupsize)
//			maxgroupsize = current;
//	}
//	printf("%d", maxgroupsize);
//}


//int compare(int p,int q,int n1,int n3)
//{
//	int m = 0;
//	int j = 0;
//	m = (q - p * n1) / (n3 - n1);
//	return m;
//}
//int main()
//{
//	int p, q, n1, n2, n3 = 0;
//	int min=0, max = 0;
//	scanf("%d %d %d %d %d", &p, &q, &n1, &n2, &n3);
//	int a = q/p;
//	
//	if (a < n3)
//	{
//		max = 0;
//	}
//	max = compare(p, q, n1, n3);
//	printf("%d %d", min, max);
//	return 0;
//}

int min(int a, int b)
{
	return (a < b) ? a : b;
}
int main()
{
	int n;
	scanf("%d", &n);
	int* bright = malloc((n + 1) * sizeof(int));
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &bright[i]);
	}
	int* dp = malloc((n + 1) * sizeof(int));
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1e9;
	}
	dp[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = min(dp[i], dp[i - 1] + 1);
		for (int j = i - 1; j >= 1; j--)
		{
			if (bright[j] == bright[i])
			{
				dp[i] = min(dp[i], dp[j] + 1);
				break;
			}
		}
	}
	printf("%d\n", dp[n]);
	return 0;
}