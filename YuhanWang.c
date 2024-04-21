#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int time = 0;
	int distance = 0;
	int rate = 14;
	printf("Enter next time :");
	scanf("%d", &time);
	do
	{
		if (time > 0)
		{
			distance = rate * time;
			printf("Time=%d hours\n", time);
			printf("Distance=%d kilometers\n\n", distance);
		}
		else
			break;
		printf("Enter next time :");
		scanf("%d", &time);
	} while (time > 0);
	{
		if (time <= 0)
			printf("***End of Program***\n");
	}
	return 0;
}