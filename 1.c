#include<stdio.h>
int main(){
	int i,j;
	
	printf("*************\n");
	printf("*           *\n");
	for(i=0;i<9;i++){
		printf("* ");
		for(j=0;j<(i/2);j++){
			printf(" ");
		}
		for(j=0;j<(9-i);j++){
			printf("*");
		}
		for(j=0;j<(i/2);j++){
			printf(" ");
		}
		printf(" *\n");
		i++;
	}
	for(i=3;i<10;i++){
		printf("* ");
		for(j=0;j<((9-i)/2);j++){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		for(j=0;j<((9-i)/2);j++){
			printf(" ");
		}
		printf(" *\n");
		i++;
	}
	
	printf("*           *\n");
	printf("*************\n");
		
}
