#include<stdio.h>
int main(){
	int n;
	printf("Enter the nth term : ");
	scanf("%d",&n);
	
	int i=0;
	
	while(i<=n){
		printf("%d",i);
		i= i+2;
	}
}
