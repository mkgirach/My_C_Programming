#include<stdio.h>

int main(){
	
	int userNumber;

	printf("\n");
	printf("____ Sir WELCOME TO ALGEBRA BASICS FORMULA ____");
	printf("\n\n");
	
	
	printf("1. (a+b)^2 = (a)^2 + 2(a)(b) + (b)^2");	printf("\n");
	printf("2. (a-b)^2 = (a)^2 - 2(a)(b) + (b)^2");	printf("\n");
	printf("3. ((a)^2 - (b)^2) = (a - b)(a + b)");  printf("\n");
	printf("4. ((a)^2 + (b)^2) = (a + b)^2 - 2(a)(b)"); printf("\n");
	printf("5. ((a) + (b) + (c)^2) = ((a)^2 + (b)^2 + (c)^2 + 2(a)(b) + 2(b)(c) + 2(c)(a))"); printf("\n");
	printf("6. ((a) + (b) + (c)^2) = ((a)^2 + (b)^2 + (c)^2 - 2(a)(b) + 2(b)(c) - 2(c)(a))"); printf("\n");
	printf("7. (a+b)^3 = (a)^3 + 3(a)(b) + (b)^3"); printf("\n");
	printf("8. (a-b)^3 = (a)^3 - 3(a)(b) +3(a)(b)^2 - (b)^3");printf("\n");
	printf("9. (a)^3 - (b)^3 = ((a)^2 + (a)(b) + (b)^2)" );printf("\n");
	printf("10.(a)^3 + (b)^3 = ((a)^2 - (a)(b) + (b)^2)");printf("\n");
	printf("11.(a+b)^4 = (a)^4 + 4 (a)^3(b) + 6(a)^2(b)^2 + 4(a)(b) + (b)^4");printf("\n");
	printf("12.(a-b)^4 = (a)^4 - 4 (a)^3(b) + 6(a)^2(b)^2 - 4(a)(b) + (b)^4");printf("\n");
	printf("13.((a^4)-(b^4)) = ((a-b)*(a+b)*(a)^2 + (b)^2)");printf("\n");
	printf("14.((a)^5-(b)^5) = ((a)^4 - (b))((a) + (a)^3(b) + (a)^2 +(b)^2 + (a)(b)^3 + (b)^4)");
	printf("\n\n");
	printf("Select Formula (1-14): ");
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
	
		printf("\n\n(a-b)^2 = (a)^2 - 2(a)(b) + (b)^2");
	
		printf("\n\t%d  - 2 (%d) (%d)   + %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
		
	}
	else if(userNumber==3)
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
	
		aSq = a-b;
		bSq = a+b;
		int ab2 = 2 * a * b;
		bF1 = aSq + ab2 + bSq;
	
		printf("\n\n(a)^2 - (b)^2 = (a-b)(a+b)");
	
		printf("\n\t%d  + 2 (%d) (%d)   + %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
	
    }
	else if(userNumber==4)
	{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t((a)^2 + (b)^2) = (a + b)^2 - 2(a)(b)");
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
	
		printf("\n\n((a)^2 + (b)^2) = (a + b)^2 - 2(a)(b)");
	
		printf("\n\t%d  - 2 (%d) (%d)   + %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
	
	}
	else if(userNumber==5)
	{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t(a+b)^2 = (a)^2 + 2(a)(b) + (b)^2");
		printf("\n\t_________________________________");
		printf("\n");
		
		
	int a,b,c,aSq,bSq,bF1,cSq;
	
	printf("Enter the 'A' Value : ");
	scanf("%d",&a);
	
	printf("Enter the 'B' Value: ");
	scanf("%d",&b);
	
	printf("Enter the 'C' Value: ");
	scanf("%d",&c);
	
	
	aSq = a*a;
	bSq = b*b;
	cSq = c*c;
	int ab2 = 2 * a * b;
	bF1 = aSq + ab2 + bSq +cSq;
	int bc2 = 2 * b * c;
	int cb2 = 2* c * a;
	printf("\n\n((a)^2 + (b)^2 + (c)^2) = ((a)^2 + (b)^2 + (c)^2 + 2(a)(b) + 2(b)(c) + 2(c)(a))");
	
	printf("\n\t %d + %d + %d + 2(%d)(%d) + 2(%d)(%d) + 2(%d)(%d)",aSq,a,b,c,bSq,cSq,ab2,bc2,cb2);
	printf("\n\t\t:%d",bF1);
    }
	else if(userNumber==6)
	{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t((a) + (b) + (c)^2) = ((a)^2 + (b)^2 + (c)^2 - 2(a)(b) + 2(b)(c) - 2(c)(a))");
		printf("\n\t_________________________________");
		printf("\n");

	int a,b,c,aSq,bSq,bF1,cSq;
	
		printf("Enter the 'A' Value : ");
		scanf("%d",&a);
	
		printf("Enter the 'B' Value: ");
		scanf("%d",&b);
	
		printf("Enter the 'C' Value: ");
		scanf("%d",&c);
	
		aSq = a*a;
		bSq = b*b;
		cSq = c*c;
		int ab2 = 2 * a * b;
		bF1 = aSq + ab2 + bSq +cSq;
		int bc2 = 2 * b * c;
		int cb2 = 2* c * a;
		printf("\n\n((a)^2 - (b)^2 - (c)^2) = ((a)^2 + (b)^2 + (c)^2 - 2(a)(b) + 2(b)(c) - 2(c)(a))");
	
		printf("\n\t %d + %d + %d - 2(%d)(%d) + 2(%d)(%d) - 2(%d)(%d)",aSq,a,b,c,bSq,cSq,ab2,bc2,cb2);
		printf("\n\t\t:%d",bF1);
   		 } 
	if(userNumber==7)
		{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t(a+b)^3 = (a)^3 + 3(a)(b) + (b)^3");
		printf("\n\t_________________________________");
		printf("\n");
		
		int a,b,aSq,bSq,bF1;
	
		printf("Enter the 'A' Value : ");
		scanf("%d",&a);
	
		printf("Enter the 'B' Value: ");
		scanf("%d",&b);
	
		aSq = a*a*a;
		bSq = b*b*b;
		int ab2 = 3 * a * b;
		bF1 = aSq + ab2 + bSq;
	
		printf("\n\n(a+b)^3 = (a)^3 + 3(a)(b) + (b)^3");
	
		printf("\n\t%d  + 3 (%d) (%d)   + %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
    }
    
    if(userNumber==8)
		{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t (a-b)^3 = (a)^3 - 3(a)(b) +3(a)(b)^2 - (b)^3");
		printf("\n\t_________________________________");
		printf("\n");
		
		int a,b,aSq,bSq,bF1;
	
		printf("Enter the 'A' Value : ");
		scanf("%d",&a);
	
		printf("Enter the 'B' Value: ");
		scanf("%d",&b);
	
		aSq = a*a*a;
		bSq = b*b*b;
		int ab2 = 3 * a * a * b;
		bF1 = aSq + ab2 + bSq;
	
		printf("\n\n (a-b)^3 = (a)^3 - 3(a)(b) +3(a)(b)^2 - (b)^3");
	
		printf("\n\t%d  - 3 (%d) * (%d)  + 3(%d)*(%d)",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
    }
    else if(userNumber==9)
	{
		printf("\nYou Selected Formula 2");
		printf("\n\n\t(a)^3 - (b)^3 = ((a)^2 + (a)(b) + (b)^2)");
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
	
		printf("\n\n((a)^2 + (a)(b) + (b)^2)");
	
		printf("\n\t%d  + (%d) * (%d)   + %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
		
	}
	else if(userNumber==10)
	{
		printf("\nYou Selected Formula 2");
		printf("\n\n\t(a)^3 + (b)^3 = ((a)^2 - (a)(b) + (b)^2)");
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
	
		printf("\n\n(a+b)((a)^2 - (a)(b) + (b)^2)");
	
		printf("\n\t %d  - (%d) * (%d)   + %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
		
		if(userNumber==11)
	{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t(a+b)^4 = (a)^4 + 4 (a)^3(b) + 6(a)^2(b)^2 + 4(a)(b) + (b)^4");
		printf("\n\t_________________________________");
		printf("\n");
		
		int a,b,aSq,bSq,bF1;
	
		printf("Enter the 'A' Value : ");
		scanf("%d",&a);
	
		printf("Enter the 'B' Value: ");
		scanf("%d",&b);
	
		aSq = a*a*a*a;
		bSq = b*b*b*b;
		int ab2 = 4 * a * b;
		bF1 = aSq + ab2 + bSq;
	
		printf("\n\n(a+b)^4 = (a)^4 + 4 (a)^3(b) + 6(a)^2(b)^2 + 4(a)(b) + (b)^4");
	
		printf("\n\t%d  + 4 (%d) (%d)   + 6(%d) (%d) + 4(%d)(%d) + (%d)",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
	}
	}
	if(userNumber==12)
	{
		printf("\nYou Selected Formula 1");
		printf("\n\n\t(a-b)^4 = (a)^4 - 4 (a)^3(b) + 6(a)^2(b)^2 - 4(a)(b) + (b)^4");
		printf("\n\t_________________________________");
		printf("\n");
		
		int a,b,aSq,bSq,bF1;
	
		printf("Enter the 'A' Value : ");
		scanf("%d",&a);
	
		printf("Enter the 'B' Value: ");
		scanf("%d",&b);
	
		aSq = a*a*a*a;
		bSq = b*b*b*b;
		int ab2 = 4 * a * b;
		bF1 = aSq + ab2 + bSq;
	
		printf("\n\n(a)^4 - 4 (a)^3(b) + 6(a)^2(b)^2 - 4(a)(b) + (b)^4");
	
		printf("\n\t%d  - 4 (%d) (%d)   + 6  (%d) (%d) - 4 (%d) (%d) - %d",aSq,a,b,bSq);
		printf("\n\t\t:%d",bF1);
	}
	else{
		printf("\n\nYou Entered Wrong Number");
	}
}

	//printf("\n"); printf("\n\n"); printf("\t"); printf("\n\t");
	
    
	
