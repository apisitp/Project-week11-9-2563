#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("input : ");
	scanf("%d", &num);
		if (num==0)
		{
			printf("zero");
		}
		else if (num>=0)
		{
			if (num %2 ==0)
			{
				printf("positive even");
			}
			else
			{
				printf("positive odd");
			}
		}
		else
		{
			if (num % 2 == 0)
			{
				printf("negative even");
			}
			else
			{
				printf("negative odd");
			}
		}
	return 0;
}