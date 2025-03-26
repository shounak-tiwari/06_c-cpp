//if - else 
#include<stdio.h>
int main(){
	// declearation of variable 
	int age ;
	// input from keyboard
	printf("Enter the age : ");
	scanf("%d",&age);
	
	if(age>=18){
		printf("you're eligible ");
	} 
	else{
		printf("you're not eligible ");
	}	
	return 0;	
}
