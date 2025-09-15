// date-15/09/25
//write a c program to print all prime numbers between certain range 
#include<stdio.h>
int main() {
	int a,b,i,j,count;
	printf("enter lower limit :");
	scanf("%d",&a);
	printf("enter upper limit :");
	scanf("%d",&b);
	printf("prime numbers between %d and %d : \n",a,b);
	for(i=a;i<=b;i++) {
		if(i<2) {
			continue;
		} 
		count=0;
		for(j=1;j<=i;j++) {
			if(i%j==0) {
				count++;
			}
		}
		if (count==2){
			printf("%d \n",i);
		}
    }
    return 0;
}
	
