#include<stdio.h>

int main(){
	
	int userNumber;
	// Welcome NOTE
	printf("\n");
	printf("____ Sir WELCOME TO ALGEBRA BASICS FORMULA ____");
	printf("\n\n");
	
	
	printf("1. (a+b)^2 = (a)^2 + 2(a)(b) + (b)^2");	printf("\n");
	printf("2. (a-b)^2 = (a)^2 - 2(a)(b) + (b)^2");	printf("\n");
	printf("3. ((a)^2 - (b)^2) = (a - b)(a + b)");
	printf("\n\n");
	printf("Select Formula (1-8): ");
	scanf("%d",&userNumber);
	
	printf("\n");
	
	if(userNumber==1)
	{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t(a+b)^2 = (a)^2 + 2(a)(b) + (b)^2");
		printf("\n\t_________________________________");
		printf("\n");
		
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
	}
	else if(userNumber==2)
	{
		printf("\nYou Selected Formula 2");
		printf("\n\n\t(a-b)^2 = (a)^2 - 2(a)(b) + (b)^2");
		printf("\n\t_________________________________");
		printf("\n");	
		
		int a,b,aSq,bSq,bF1;
	
		printf("Enter the 'A' Value : ");
		scanf("%d",&a);
	
		printf("Enter the 'B' Value: ");
		scanf("%d",&b);
	
		aSq = a*a;
		bSq = b*b;
		int ab2 = 2 * a * b;
		bF1 = aSq - ab2 + bSq;
	
		printf("\n\n(a+b)^2 = a^2 + 2ab + b^2");
	
		printf("\n\t%d  - 2 (%d) (%d)   + %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
		
	}
	else if(userNumber==3)
	{
		printf("User Enter Three");
	}
	else if(userNumber==4)
	{
		printf("User Enter Four");
	}
	else if(userNumber==5)
	{
		printf("User Enter Five");
	}
	else{
		printf("\n\nYou Entered Wrong Number");
	}
	
	
	//printf("\n"); printf("\n\n"); printf("\t"); printf("\n\t");
	
}
