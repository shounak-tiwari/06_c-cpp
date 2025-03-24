// wap for enter a char and check it is number or not 

#include<stdio.h>
int main(){
	char ch;
	printf("Enter char : ");
	scanf("%c",&ch);
	
	if (ch>='0' && ch <= '9'){
		printf("Yes its number ");
	}
	
}
