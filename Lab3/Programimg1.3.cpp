#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number : ");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{

		for (int n = 1; n <= i; n++)
		{   
			
			printf("*");    
		}
		for (int k = 2*x - 2*i  ; k>=2;k--)
		{	

			printf(" ");
			
		}
		for (int p = 1; p <= i; p++)
		{   
			if (p == x)
			{
				printf(" ");
				break;
			}
			printf("*");
		}
		printf("\n");
		
       
	}
	for (int m = x-1; m >= 1; m--)
	{
		for (int n = 1; n <= m; n++)
		{
			printf("*");
		}
		for (int k = 2 * x - 2 * m; k >= 2; k--)
		{

			printf(" ");

		}
		for (int p = 1; p <= m; p++)
		{
			if (p == x)
			{
				printf(" ");
				break;
			}
			printf("*");
		}
		printf("\n");
		
	}


	


	return 0;
}