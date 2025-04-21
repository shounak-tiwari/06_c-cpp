// wap for print sum of all n number using recursion
#include<stdio.h>
int sum(int n)
{
	static int x=0;
	if(n==0){
		printf("%d",x);
		return 0;
	}
	x = x+n;
	sum(n-1);
}
int main(){
	sum(100);
}
