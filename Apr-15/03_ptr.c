// danling pointer 

#include<stdio.h>
#include<stdlib.h>


int* demo(){
	int *ptr = (int*)malloc(sizeof(int));
	*ptr =  42;
	//free(ptr);// memory free 
	return ptr; // dangling pointer 
}

int main(){
	int *dangling = demo();
	
	printf("%d\n",*dangling);
	
	return 0;
}
