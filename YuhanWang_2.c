#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	float acceleration,distance;
	int time;
    printf("Enter next time :");
	scanf("%d", &time);
	printf("Enter next acceleration: ");
	scanf("%f", &acceleration);
	while (time >= 0)
	{
		distance = time * 14 + acceleration * time * time / 2;
		printf("Time= %d hours\n", time);
		printf("Distance= %f kilometers\n\n", distance);
		printf("Enter next time :");
		scanf("%d", &time);
		printf("Enter next acceleration: ");
		scanf("%f", &acceleration);
	}
	if (time < 0)
		printf("***End the Program***");
	return 0;
}