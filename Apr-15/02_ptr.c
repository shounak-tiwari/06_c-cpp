// wild pointer 

#include<stdio.h>

int main(){

	void *ptr;

	int x=10;
	
	ptr = &x;
	
	printf("Value is : %d\n",*(int*)ptr);
	
	
	
	printf("Address is : %p\n",(int*)ptr);
	
}
