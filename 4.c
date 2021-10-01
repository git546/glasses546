#include <stdio.h>
int fibo(int a);
int main(void)
{
	int i,j=1,a,k=0;
	printf("input(n):");
	scanf("%d", &i);
    
	printf("F%d is %d",i,fibo(i));
	return 0;
	}
int fibo(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}

