#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size){

    for(int i = 0; i < size; i++){
        int swapCount = 0;
        for(int j = 0; j < (size - i - 1); j++){
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
                swapCount++;
            }
        }
        printf("[%d] ",swapCount);
    }



}

void swap(int * x, int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int array[], int size){
    printf("Printing Array\n--------------------------------------------------\n");
    for(int i = 0; i  < size; i++){
        printf("[%d] ", array[i]);
    }
    printf("\n--------------------------------------------------\n");
}

int main(){
    int array[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int size = sizeof(array) / sizeof(int);

    printf("Unsorted Array\n");
    printArray(array, size);

    printf("\n");
    printf("Amount of Swaps: ");
    bubbleSort(array, size);
    printf("\n\n");

    printf("Sorted Array\n");
    printArray(array, size);

}
