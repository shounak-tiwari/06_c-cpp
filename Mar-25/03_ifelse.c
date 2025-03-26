// if else nested 

/*
1. age >=17 and age <=20
2. highersec >= pass with 75%
3. highersec == pcm , pmcs , pcmb, etc...
*/

#include<stdio.h>
int main(){
	int age, highersec, sub;
	
	printf("Enter the age : ");
	scanf("%d",&age);
	
	printf("Press 1 if you're 12th is complited with 75 or more percentage :  ");
	scanf("%d",&highersec);
	
	
	printf("Press 1 if you're sub is pcm/pcsm/pcbm :  ");
	scanf("%d",&sub);
	
	if (age>=17 && age<=20){
		if(highersec==1){
			if(sub==1){
				printf("Cong! you're eligible ");
			}
			else{
				printf("Your sub is not matched");
			}
		}
		else{
			printf("Oops! please complete your 12th first with at least 75 percentage");
		}
	}
	else{
		printf("Sorry! your age is not matched ");
	}
}
