//parameter with return 

#include<stdio.h>

int add(int x,int y){
	return x+y;
}

int main(){
	int x = add(10,20);
	
	printf("%d",x);
}
