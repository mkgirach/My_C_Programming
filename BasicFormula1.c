#include<stdio.h>

int main(){
	
	int a,b,aSq,bSq,bF1;
	
	printf("Enter the 'A' Value : ");
	scanf("%d",&a);
	
	printf("Enter the 'B' Value: ");
	scanf("%d",&b);
	
	aSq = a*a;
	bSq = b*b;
	int ab2 = 2 * a * b;
	bF1 = aSq + ab2 + bSq;
	
	printf("\n\n(a+b)^2 = a^2 + 2ab + b^2");
	
	printf("\n\t%d  + 2 (%d) (%d)   + %d",aSq,a,b,bSq);
	printf("\n\t\t:%d",bF1);
	//(a+b)^2 = a^2 + 2ab + b^2
	
	
	
	
	

	
	
	
	
	
	
	
}
