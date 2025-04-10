#include<stdio.h>
//declaration of function prototype -- return type function_name
void Add();

int main(){
	
	//pair = 1,4
	Add();
	//pair = 5,7
	Add();
	//pair = 9,8
	Add();
	//pair = 12,18
	Add();
}	


//function define 
void Add(){
	int num1,num2;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	scanf("%d",&num2);
	int sum = num1+num2;
	printf("The sum of number 1 and number 2 : %d",sum);
}
