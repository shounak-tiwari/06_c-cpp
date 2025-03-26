// simple calculator 
/*
	operators
	val1, val2
*/

#include<stdio.h>
int main(){
	char op;
	
	printf("Enter operators : ");
	scanf("%c",&op);
	
	int num1, num2;
	
	printf("Enter the value of number 1 : ");
	scanf("%d",&num1);
	
	printf("Enter the value of number 2 : ");
	scanf("%d",&num2);
	
	
	switch(op){
		case '+':
		printf("The sum of number 1 and number 2 : %d",(num1+num2));
		break;
		
		case '-':
		printf("The sub of number 1 and number 2 : %d",(num1-num2));
		break;
		
		case '*':
		printf("The multiplication of number 1 and number 2 : %d",(num1*num2));
		break;
		
		case '/':
		printf("The division of number 1 and number 2 : %d",(num1/num2));
		break;
		
		case '%':
		printf("The modulous of number 1 and number 2 : %d",(num1%num2));
		break;
	}	
	
		
	return 0;
}
