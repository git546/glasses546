#include <stdio.h>
int factorial(int a);
int main(void)
{
	int i,j;
	printf("input:");
	scanf("%d", &i);
    j=factorial(i);

	printf("%d! is %d",i,j);
	return 0;
	}

int factorial(int a)
{
    if(a==1)
    	return 1;
    
    return a*factorial(a-1);
}

