//no parameter without return 
#include<stdio.h>

//declaration of function 
void Add();

int main(){
	Add();
}

void Add(){
	int x,y;
	printf("Enter the value of number 1 : ");
	scanf("%d",&x);
	printf("Enter the value of number 2 : ");
	scanf("%d",&y);
	int add = x+y;
	printf("The addition of x and y : %d",add);
}
