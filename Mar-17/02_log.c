#include<stdio.h>
int main(){
	int age ;
	printf("Enter the age : ");
	scanf("%d",&age);
	int result = ((age>=17)||(age<=24));
	printf("The result is : %d", result);
	return 0;
}
