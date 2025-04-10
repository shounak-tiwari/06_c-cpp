#include<stdio.h>
int main(){
	int num =2;
	int n = 100;
	while(num<=n){
	int fact =0;
	int i = 2;	
	while(i<=num-1){
		if(num%i == 0){
			fact++;
			break;
		}
		i++;
	}
	if (fact==0){
		printf("\nthe number is prime : %d",num);
	}
		num++;
	}
}
