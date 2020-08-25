#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int sum = 0,n;
    printf("Enter Value :");
    scanf("%d", &n);
    // Loop to do sum while 
    // sum is not less than 
    // or equal to 9 
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
        
    }
    printf("%d\n", sum);
    
	return 0;
}