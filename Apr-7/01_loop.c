#include<stdio.h>
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	int fact = 0;
	int  i =2;
	while(i<=num-1){
		if(num%i==0){
			fact++;
			break;
		}
		i++;
	}
	if(fact==0){
		printf("Number is prime");
	}
	else{
		printf("Number is not prime");
	}
}
