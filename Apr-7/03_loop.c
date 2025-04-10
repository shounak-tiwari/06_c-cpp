#include<stdio.h>
int main(){
	for(int r=1;r<=7;r++){
		for(int c=1;c<=5;c++){
			if((c==1||c==5)&&(r>=2 && r<=7)||
			(c==2||c==3||c==4)&&(r==1||r==4)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

