#include<stdio.h>

// logical (&&, ||, !)

// && logical and is return true when  both condition result are true 

int main(){
	// JEE -> (age >=17 and age <= 24) 
	
	int age;
	printf("Enter the age of Candidate : ");
	scanf("%d",&age);
	
	int result = ((age >= 17) && (age<=24)) ;
	// ((a)&&(b)) ==> ((34>=17)&&(34<=24))
	//  ((T) && (F) => (F)
	
	//((21>=17)&&(21<=24))
	// ((T) && (T) => (T)
	
	
	printf("The result is : %d",result);
	return 0;
}
