#include<stdio.h>
int fact(int n){
	if (n==0){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	printf("%d",fact(5));
}

