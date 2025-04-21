#include<stdio.h>
// pass arrays in function parameters 
void SelectionSort(int arr[],int size){
	for(int i=0 ;i<size;i++){
		for (int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
}

int main(){
	// array declare 
	int arr[5];
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i= 0; i<size;i++){
		printf("Enter element  : ");
		scanf("%d",&arr[i]);
	}
	printf("Before sorting : \n");
	for(int i= 0; i<size;i++){
		printf("\nElement  : %d",arr[i]);
	}
	
	//selection sort
	SelectionSort(arr,size);	
	printf("\nAfter sorting : \n");
	for(int i= 0; i<size;i++){
		printf("\nElement  : %d",arr[i]);
	}
	
}
