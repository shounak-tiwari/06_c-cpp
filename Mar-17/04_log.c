#include<stdio.h>
int main(){
	int x,y;
	//user input of value of x
	printf("Enter the value of x : ");
	scanf("%d",&x);
	//user input of value of y
	printf("Enter the value of y : ");
	scanf("%d",&y);
	// ? (question mark block) --> true  : (colon block)--> false 
	(x>y) ? printf("x is max ") : printf("y is max ");
	return 0;
}
