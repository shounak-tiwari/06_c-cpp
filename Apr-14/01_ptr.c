#include<stdio.h>
int main(){
	int *p;
	int x;
	
	p=&x;
	
	printf("Enter the address : ");
	scanf("%d",p);
	
	printf("%p",p);
	
	printf("%d",*p);
	//address specifier of pointer is : %p
	
}
