// recursion : function call by itself 
// but recusion is control using base conditions 

#include<stdio.h>

int nth(int n){
	if(n==0){
		printf("%d",n);
		return 0;
	}
	printf("%d",n);
	nth(n-1);
	
}

int main(){
	nth(10);
}
