//constant pointer 
#include<stdio.h>
int main(){
	int x=10,y=20;
	
	int *const ptr = &x;
	
	*ptr=30;
	
	
	ptr= &y;
	
	printf("value : %d\n",*ptr);
	
	
	
	return 0;
}
