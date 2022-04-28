#include<stdio.h>
int main(){
	// declear Integer
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	// number %d 2 if reminder is 0 its means Even Number otherwise off number
	if(num%2==0){
		// printing Even
		printf("Even");
	}
	else {
		// printing Odd
		printf("Odd");
	}
}
