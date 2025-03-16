#include<stdio.h>

void main(){
	const float pi = 3.147;
	//read only variable can not change or assign thier values after initialazation
	
	
	float radius;
	printf("Enter the radius of circle : ");
	scanf("%f",&radius);
	
	float area_of_circle = pi*radius*radius;
	printf("The area of circle is : %.1f",area_of_circle);
	
}
