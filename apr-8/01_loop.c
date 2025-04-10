#include<stdio.h>
int main(){
	int tr=5;
	for (int r=5;r>=1;r--){
		for(int s=1;s<=tr-r;s++){
			printf("_");
		}
		for(int c=1;c<=r;c++){
			printf("*");
		}
		printf("\n");
	}
}
