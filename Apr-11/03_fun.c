// wap for find factorial of number using recursion 
#include<stdio.h>
int fact(int n){
	static int i = 1;
	if (n==0){
		printf("the fact is : %d",i);
		return 0;
	}
	i = i*n;
	fact(n-1);
}

int main(){
	fact(5);
}
