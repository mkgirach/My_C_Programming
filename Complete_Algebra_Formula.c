#include<stdio.h>

int main(){
	
	int userNumber;

	printf("\n");
	printf("_ My Complete Algebra Formula _");
	printf("\n\n");
	printf("1. (a+b)^2 = (a)^2 + 2(a)(b) + (b)^2");	printf("\n");
	printf("2. (a-b)^2 = (a)^2 - 2(a)(b) + (b)^2");	printf("\n");
	printf("3. ((a)^2 - (b)^2) = (a - b)(a + b)");  printf("\n");
	printf("4. ((a)^2 + (b)^2) = (a + b)^2 - 2(a)(b)"); printf("\n");
	printf("5. ((a) + (b) + (c))^2 = ((a)^2 + (b)^2 + (c)^2 + 2(a)(b) + 2(b)(c) + 2(c)(a))"); printf("\n");
	printf("6. ((a) + (b) + (c))^2 = ((a)^2 + (b)^2 + (c)^2 - 2(a)(b) + 2(b)(c) - 2(c)(a))"); printf("\n");
	printf("7. (a+b)^3 = (a)^3 + 3(a)(b) + (b)^3"); printf("\n");
	printf("8. (a-b)^3 = (a)^3 - 3(a)(b) +3(a)(b)^2 - (b)^3");printf("\n");
	printf("9. (a)^3 - (b)^3 = ((a)^2 + (a)(b) + (b)^2)" );printf("\n");
	printf("10.(a)^3 + (b)^3 = ((a)^2 - (a)(b) + (b)^2)");printf("\n");
	printf("11.(a+b)^4 = (a)^4 + 4 (a)^3(b) + 6(a)^2(b)^2 + 4(a)(b) + (b)^4");printf("\n");
	printf("12.(a-b)^4 = (a)^4 - 4 (a)^3(b) + 6(a)^2(b)^2 - 4(a)(b) + (b)^4");printf("\n");
	printf("13.((a^4)-(b^4)) = ((a-b)(a+b)(a)^2 + (b)^2)");printf("\n");
	printf("14.((a)^5-(b)^5) = ((a)^4 - (b))((a) + (a)^3(b) + (a)^2 +(b)^2 + (a)(b)^3 + (b)^4)");
	printf("\n\n");
	printf("Select Formula (1-14): ");
	scanf("%d",&userNumber);
	
	printf("\n");
	
	if(userNumber==1)
	{
		int num1, num2;
	
		printf("Enter the First Number: ");
		scanf("%d",&num1);
	
		printf("Enter the Second Number: ");
		scanf("%d", &num2);
	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
		printf("\n");
		printf("(%d+%d)^2 = (%d)^2 +2(%d)(%d) +(%d)^2",num1,num2,num1,num1,num2,num2);
		printf("\n\t = (%d) +2(%d)(%d) +(%d)",num1Sq,num1,num2,num2Sq);
		printf("\n\t = %d  + %d + %d ",num1Sq,(2*num1*num2),num2Sq);
		printf("\n\t = %d",num1Sq+(2*num1*num2)+num2Sq);

	}
	if(userNumber==2)
	{
		int num1, num2;
	
		printf("Enter the First Number: ");
		scanf("%d",&num1);
	
		printf("Enter the Second Number: ");
		scanf("%d", &num2);

	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	printf("\n");
	printf("(%d-%d)^2 = (%d)^2 -2(%d)(%d) +(%d)^2",num1,num2,num1,num1,num2,num2);
	printf("\n\t = (%d) -2(%d)(%d) +(%d)",num1Sq,num1,num2,num2Sq);
	printf("\n\t = %d  - %d + %d ",num1Sq,(2*num1*num2),num2Sq);
	printf("\n\t = %d",num1Sq-(2*num1*num2)+num2Sq);

}
if(userNumber==3)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);

	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	printf("\n");
//	((a)^2 - (b)^2) = (a - b)(a + b)
	printf("((%d)^2 - (%d)^2) = (%d - %d)(%d + %d))",num1,num2,num1,num2,num1,num2);
	printf("\n\t = (%d)(%d)",(num1-num2),(num1+num2));
	printf("\n\t = %d",(num1-num2)*(num1+num2));
//	printf("\n\t = %d",num1Sq-(2*num1*num2)+num2Sq);

}
if(userNumber==4)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);

	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	printf("\n");
//((a)^2 + (b)^2) = (a + b)^2 - 2(a)(b)
	printf("((%d)^2 + (%d)^2) = (%d + %d)^2 - 2(%d)(%d)",num1,num2,num1,num2,num1,num2);
	printf("\n\t = (%d)^2 - 2(%d)(%d)",(num1+num2),num1,num2);
	printf("\n\t = (%d) - 2(%d)(%d)",(num1+num2)*(num1+num2),num1,num2);
	printf("\n\t = (%d) - %d",(num1+num2)*(num1+num2),2*num1*num2);
	printf("\n\t = %d",(num1+num2)*(num1+num2)-2*num1*num2);

}
if(userNumber==5)
	{
		int num1, num2,num3;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	printf("Enter the Third Number: ");
	scanf("%d", &num3);

	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	
	int num3Sq = num3 * num3;
	int num3Cub = num3Sq * num3;
	int num3fth = num3Sq * num3Sq;
	
	printf("\n");
	
//((a) + (b) + (c))^2 = ((a)^2 + (b)^2 + (c)^2 + 2(a)(b) + 2(b)(c) + 2(c)(a))
	printf("((%d) + (%d) + (%d))^2 = ((%d)^2 + (%d)^2 + (%d)^2 + 2(%d)(%d) + 2(%d)(%d) + 2(%d)(%d))",num1,num2,num3,num1,num2,num3,num1,num2,num2,num3,num3,num1);
	printf("\n\t = %d + %d + %d + 2(%d)(%d) + 2(%d)(%d) + 2(%d)(%d)",num1Sq,num2Sq,num3Sq,num1,num2,num2,num3,num3,num1);
	printf("\n\t = %d + %d + %d + %d + %d + %d",num1Sq,num2Sq,num3Sq,2*num1*num2,2*num2*num3,2*num3*num1);
//	printf("\n\t = (%d) - %d",(num1+num2)*(num1+num2),2*num1*num2);
	printf("\n\t = %d",num1Sq+num2Sq+num3Sq+2*num1*num2+2*num2*num3+2*num3*num1);

}
if(userNumber==6)
	{
		int num1, num2,num3;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	printf("Enter the Third Number: ");
	scanf("%d", &num3);

	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	
	int num3Sq = num3 * num3;
	int num3Cub = num3Sq * num3;
	int num3fth = num3Sq * num3Sq;
	
	printf("\n");
	
//((a) + (b) + (c))^2 = ((a)^2 + (b)^2 + (c)^2 - 2(a)(b) + 2(b)(c) - 2(c)(a))
	printf("((%d) + (%d) + (%d))^2 = ((%d)^2 + (%d)^2 + (%d)^2 - 2(%d)(%d) + 2(%d)(%d) - 2(%d)(%d))",num1,num2,num3,num1,num2,num3,num1,num2,num2,num3,num3,num1);
	printf("\n\t = %d + %d + %d - 2(%d)(%d) + 2(%d)(%d) - 2(%d)(%d)",num1Sq,num2Sq,num3Sq,num1,num2,num2,num3,num3,num1);
	printf("\n\t = %d + %d + %d - %d + %d - %d",num1Sq,num2Sq,num3Sq,2*num1*num2,2*num2*num3,2*num3*num1);
//	printf("\n\t = (%d) - %d",(num1+num2)*(num1+num2),2*num1*num2);
	printf("\n\t = %d",num1Sq+num2Sq+num3Sq+2*num1*num2+2*num2*num3+2*num3*num1);
}
if(userNumber==7)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);

	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	
	printf("\n");
	printf("(%d+%d)^3 = (%d)^3 +3(%d)(%d) +(%d)^3",num1,num2,num1,num1,num2,num2);
	printf("\n\t = (%d) +3(%d)(%d) +(%d)",num1Sq,num1,num2,num2Sq);
	printf("\n\t = %d  + %d + %d ",num1Sq,(2*num1*num2),num2Sq);
	printf("\n\t = %d",num1Sq+(2*num1*num2)+num2Sq);
}
if(userNumber==8)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);

	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	
	printf("\n");
	// (a-b)^3 = (a)^3 - 3(a)(b) +3(a)(b)^2 - (b)^3
	printf("(%d-%d)^3 = (%d)^3 -3(%d)(%d) +3(%d)(%d)^2-(%d)^3",num1,num2,num1,num1,num2,num1,num2,num2);
	printf("\n\t = (%d) -3(%d)(%d) +3(%d)(%d) -(%d)",num1Sq,num1,num2,num1,num2,num2,num2fth);
	printf("\n\t = %d  - %d + %d + %d ",num1Sq,(3*num1*num2),(3*num1*num2),num2Sq);
	printf("\n\t = %d",num1Sq+(3*num1*num2)+(3*num1*num2)+num2Sq);
}
if(userNumber==9)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	printf("\n");
//	(a)^3 - (b)^3 = ((a)^2 + (a)(b) + (b)^2)
	printf("(%d)^3 - (%d)^3 = (%d)^2 +(%d)(%d) +(%d)^2",num1,num2,num1,num1,num2,num2);
	printf("\n\t = (%d) +(%d)(%d) +(%d)",num1Sq,num1,num2,num2Sq);
	printf("\n\t = %d  + %d + %d ",num1Sq,(num1*num2),num2Sq);
	printf("\n\t = %d",num1Sq+(num1*num2)+num2Sq);

}
if(userNumber==10)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	printf("\n");
//	(a)^3 + (b)^3 = ((a)^2 - (a)(b) + (b)^2)
	printf("(%d)^3 - (%d)^3 = (%d)^2 -(%d)(%d) +(%d)^2",num1,num2,num1,num1,num2,num2);
	printf("\n\t = (%d) -(%d)(%d) +(%d)",num1Sq,num1,num2,num2Sq);
	printf("\n\t = %d  - %d + %d ",num1Sq,(num1*num2),num2Sq);
	printf("\n\t = %d",num1Sq-(num1*num2)+num2Sq);

}  
if(userNumber==11)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;
	printf("\n");
//	(a+b)^4 = (a)^4 + 4 (a)^3(b) + 6(a)^2(b)^2 + 4(a)(b) + (b)^4
	printf("(%d+%d)^4 = (%d)^4 + 4 (%d)^3(%d) + 6(%d)^2(%d)^2 + 4(%d)(%d) + (%d)^4",num1,num2,num1,num1,num2,num1,num2,num1,num2,num2);
	printf("\n\t = (%d) + 4 (%d)^3(%d) + 6(%d)^2(%d)^2 + 4(%d)(%d)  +(%d)",num1fth,num1,num2,num1,num2,num1,num2,num2fth);
	printf("\n\t = (%d) + 4 (%d)(%d) + 6(%d)(%d) + 4(%d)(%d)  +(%d)",num1fth,num1Cub,num2,num1Sq,num2Sq,num1,num2,num2fth);
	printf("\n\t = (%d) + (%d) + (%d) + (%d)  +(%d)",num1fth,4*num1Cub*num2,6*num1Sq*num2Sq,4*num1*num2,num2fth);
	printf("\n\t = %d",num1fth+4*num1Cub*num2+6*num1Sq*num2Sq+4*num1*num2+num2fth);

}  
	if(userNumber==12)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;

	printf("\n");
	printf("(%d-%d)^4 = (%d)^4 - 4(%d)(%d)^(3) +6(%d)^2(%d)^2 -4(%d)(%d)+(%d)^(4)",num1,num2,num1,num1,num2,num1,num2,num1,num2,num2);
	printf("\n\t = (%d) - 4(%d)(%d) + 6(%d)(%d) - 4(%d)(%d) + (%d)",num1fth,num1,num2Cub,num1Sq,num2Sq,num1,num2,num2fth);
	printf("\n\t = %d - %d + %d - %d + %d",num1fth,(4*num1*num2Cub),(6*num1Sq*num2Sq),(4*num1*num2),num2fth);
	printf("\n\t = %d",(num1fth - (4*num1*num2Cub) + (6*num1Sq*num2Sq) -(4*num1*num2) + num2fth));

}
if(userNumber==13)
	{
		int num1, num2;
	
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	
	int num1Sq = num1 * num1;
	int num1Cub = num1Sq * num1;
	int num1fth = num1Sq * num1Sq;
	
	int num2Sq = num2 * num2;
	int num2Cub = num2Sq * num2;
	int num2fth = num2Sq * num2Sq;

	printf("\n");
	//((a^4)-(b^4)) = ((a-b)(a+b)(a)^2 + (b)^2)
	printf("(%d)^4 - (%d)^4 = ((%d-%d)(a+b)(%d)+(%d))",num1,num2,num1,num1,num2,num1,num2,num1,num2,num2);
	printf("\n\t =((%d-%d)(a+b)(%d)+(%d)) ",num1fth,num1,num2Cub,num1Sq,num2Sq,num1,num2,num2fth);
	printf("\n\t = %d - %d + %d - %d + %d",num1fth,(4*num1*num2Cub),(6*num1Sq*num2Sq),(4*num1*num2),num2fth);
	printf("\n\t = %d",(num1fth - (4*num1*num2Cub) + (6*num1Sq*num2Sq) -(4*num1*num2) + num2fth));

}
    else {
    	printf("\n __________________BROTHER PLEASE CORRECT NUMBER_________________");
	}
}

//((a^4)-(b^4)) = ((a-b)(a+b)(a)^2 + (b)^2)
