// date-15/09/25
//write a c program to print factorial of a number
#include<stdio.h>
int main() {
	int n,i,fact=1;
	printf("enter a number:");
	scanf("%d",&n);
	if (n<0) {
		printf("factorial is not defined for negative numbers \n");
	}
	else {
		for(i=1;i<=n;i++) {
			fact*=i;
		}
	}
	printf("facorial of %d is %d \n",n,fact);
	return 0;
}
