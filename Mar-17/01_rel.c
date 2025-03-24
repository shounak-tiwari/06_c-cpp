#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the value of x and y : ");
	scanf("%d%d",&x,&y);
	// in c programming we can not declare bool type values 
	// int ---> 1,2,3,4,5,6-------
 	// float---> 1.1 .....
 	// char---> 'a','b','@'
 	// long---> extends of int
 	// double---> extends of float
 	// int ---> result (true/false) 1 and 0 
 	// > 
 	
 	int result  =  x>y;
 	printf("%d",result);
	
	
	
	return 0;
}
