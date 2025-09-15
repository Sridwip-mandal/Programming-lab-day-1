// date-15/09/25
//write a c program to find the sum of n natural numbers
#include<stdio.h>
int main() {
	int i,n,sum=0;
	printf("enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		sum+=i;
    }
	printf("Sum of %d natural numbers is:%d \n",n,sum);
	return 0;
}
