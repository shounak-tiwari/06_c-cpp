// no parameter with return 
#include<stdio.h>
int add();
int main(){
	int x = add();	
	printf("the sum of two no : %d",x);
}
int add(){
	int x,y;
	printf("Enter the value of x: ");
	scanf("%d",&x);	
	printf("Enter the value of y: ");
	scanf("%d",&y);
	return x+y;
}
