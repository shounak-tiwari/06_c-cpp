// function pointer 

#include<stdio.h>
void sayhello(){
	printf("Hello from function pointer ");
}

int main(){
	void(*x)() = sayhello;
	
	x();// calling function via pointer
	
	return 0;
}
