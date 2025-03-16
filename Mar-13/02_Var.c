#include<stdio.h>
#define PI 3.147

int main(){
	float radius;
	printf("Enter the radius : ");
	scanf("%f",&radius);
	float area_of_circle = PI*radius*radius;
	printf("Area of circle is : %f ",area_of_circle);
}
