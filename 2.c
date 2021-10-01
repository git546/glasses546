#include <stdio.h>
double factorial(double a);
int main(void)
{
	int x, i;
	double j,k,a;
	k=1;
	printf("input error range epsilon: ");
	scanf("%lf", &a);
	for(i=1;i>0;i++)
	{
    	j=1/factorial(i);
    	
    	k=k+j;
    	if(j<a)
    		break;
	}
	printf("result is %lf", k);
	return 0;
	}

double factorial(double a)
{
    double i,j;
    j=1;
    for(i=1;i<=a;i++){
    	j=j*i;
    }
    return j;
}

