#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	
	
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	
	int max = (n1>n2)?n1:n2;
	
	while(1){
		if(max%n1==0 && max%n2==0){
		printf("LCM : %d",max);
		break;
		}
		else{
		max=max+1;
		}
	}

}
