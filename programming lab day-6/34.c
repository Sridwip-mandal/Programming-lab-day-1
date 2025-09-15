// date-15/09/25
//write a c program to print fibonacci upto n terms
#include<stdio.h>
int main() {
	int a=0,b=1,c,n,i;
	printf("enter no. of terms :");
	scanf("%d",&n);
	printf("fibonacci series :");
	for(i=1;i<=n;i++) {
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
        printf("\n");
    }
    return 0;
}
