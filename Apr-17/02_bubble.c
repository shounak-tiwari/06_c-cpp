#include<stdio.h>

void bubblesort(int arr[],int size){
	for(int i =0 ;i<size;i++){
		for(int j=0 ; j<size-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void PrintArrays(int arr[],int size){
	for(int i=0 ; i<size;i++){
		printf("The element : %d\n",arr[i]);
	}
}
int main(){
	int arr[] = {8,5,3,1,2};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	PrintArrays	(arr,size);
	
	bubblesort(arr,size);

	PrintArrays	(arr,size);
}
