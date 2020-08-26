#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x,Result = 0;
	printf("x = ");
	scanf("%d", &x);
	printf("1\n");
	for (int i = 1; i < x; i++)
	{
		
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				Result += j;			
			}
			if (j == i-1)
			{
				if (Result == i)
				{
					printf("%d\n", i);
					break;
				}
			}
	
		}
		Result = 0;
		//printf("%d\n", Result);
	
		
	
	}

	




	return 0;
}