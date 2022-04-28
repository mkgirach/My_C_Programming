#include<stdio.h>

int main(){
	
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
	//
}
