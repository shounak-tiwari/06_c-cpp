#include<stdio.h>
int main(){
    // declare arrays 
    float arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        printf("Enter elements arr[%d] : ",i);
        scanf("%f",&arr[i]);
    }
    // printing 
    for (int i = 0; i < size; i++)
    {
        printf("\n Elements arr[%d] : %.2f",i,arr[i]);
    }

}