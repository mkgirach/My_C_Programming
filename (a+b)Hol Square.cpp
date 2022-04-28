#include<stdio.h>
 int main (){
 	
 	int a,b,c,d,e,f;
 	  
 	printf("Enter the FIEST value : ");
 	scanf("%d",&a);
 	
 	printf("Enter the SECOND value : ");
 	scanf("%d",&b);
 	
 	printf("\nAdding %d + %d = %d",a,b,(a+b));
 	c= a*a;
 	d= 2*a*b;
 	e= b*b;
 	f= c+d+e;
 	printf("\nSquare = %d",f);
 	if ((a+b)%2==0){
 		printf("\n Even");
 	 }
 	else{
 		printf("\nOdd");
	 }	
 }
