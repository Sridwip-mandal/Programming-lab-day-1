// date-15/09/25
//write a c program to find the multiplication table of a number
#include<stdio.h>
int main() {
	int i,n;
	printf("enter a number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++) {
	    printf("%d x %d = %d \n",n,i,n*i);
	}
	return 0;
}
