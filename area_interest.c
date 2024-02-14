#include<stdio.h>
main(){
	int p,r,n;
	
	printf("enter tha value of p:");
	scanf("%d",p);
		
	printf("enter tha value of r:");
	scanf("%d",r);
		
	printf("enter tha value of n:");
	scanf("%d",n);
	
   float	sum=(p*r*n)/100;
	
	printf("your simple interest is:%.2f",sum);
}
