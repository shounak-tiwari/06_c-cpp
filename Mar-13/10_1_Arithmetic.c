//Input a number and calculate its square
// x => x*x

#include<stdio.h>
#include<math.h>
int main(){
	int x;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	int square =pow(x,2);
	printf("The Square is : %d",square);
	return 0;
}
