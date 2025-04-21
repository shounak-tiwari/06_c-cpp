#include<stdio.h>
// parameter without return 
void add(int x,int y);
int main(){
	int a,b;
	printf("Enter the value of a :  ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	//call by value 
	add(a,b);
}
void add(int x,int y){
	printf("The sum of x and y : %d",x+y);
}
