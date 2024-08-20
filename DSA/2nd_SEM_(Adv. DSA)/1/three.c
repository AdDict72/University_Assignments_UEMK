/*Write a C program to implement the concept of Insertion sort on the above data set. Print the data set after every iteration.*/

#include<stdio.h>

void insertionSort(int arr[],int count){
    int i,j,key;
    for(i=1;i<count;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;

        printf("Interation %d:",i);
        for (int k = 0; k < count; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}
int main(){
    int arr[]={27,15,39,21,28,70};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array : ");
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    insertionSort(arr,n);

    printf("\nSorted array : { ");
    for(int i = 0; i <n ; i++){
        printf("%d ",arr[i]);
    }
    printf("}\n");
    return 0;
}