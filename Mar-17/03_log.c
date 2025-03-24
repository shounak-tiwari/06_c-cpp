#include<stdio.h>

int main(){
	int age ;
	printf("Enter the age of student : ");
	scanf("%d",&age);
	
	int result = !(age>18);
	
	printf("The result is : %d",result);
	
	return 0;
}
