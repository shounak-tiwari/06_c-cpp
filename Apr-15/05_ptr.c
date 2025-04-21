//pointer to pointer 
#include<stdio.h>
int main(){
	int x=10;
	int *ptr = &x;
	
	int **dblptr = &ptr;
	
	printf("value : %d\n",**dblptr);
	return 0;
}
