#include<stdio.h>
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int n1,n2;
	n1=0;
	n2=1;
	printf("%d, ",n1);
	printf("%d, ",n2);
	int i =1;
	while(i<=num){
		
		int n3 = n1+n2;
		printf("%d, ",n3);
		n1 = n2;
		n2 = n3;
		
			i++;
	}
}
