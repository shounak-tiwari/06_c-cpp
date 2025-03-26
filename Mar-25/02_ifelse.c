// nested if control statement 
/*

1. age >=17 and age <=20
2. highersec >= pass with 75%
3. highersec == pcm , pmcs , pcmb, etc...

*/
#include<stdio.h>

int main(){
	int age,heighersec,sub;
	printf("Enter the age : ");
	scanf("%d",&age);
	printf("Press 1 if you have completed your 12th examination with 75 percentage if not press other key : ");
	scanf("%d",&heighersec);
	printf("Press 1 if your sub is pcm/pmcs/pmcb if not press other key : ");
	scanf("%d",&sub);
	
	if (age >= 17 && age <= 20){
		if(heighersec == 1){
			if(sub==1){
				printf("You're eligible for JEE coun...");
			}
		}
	}
	return 0;
} 
