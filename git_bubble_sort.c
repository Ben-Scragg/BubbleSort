#include<stdio.h>
#include<stdbool.h>

void bubble_sort(int *unsorted, int length){
    bool sorted = false;
    int temp = 0;
    while (sorted == false){
        sorted = true;
        for(int i = 0; i<length-1;i++){
            if(unsorted[i]>unsorted[i+1]){
                sorted = false;
                temp = unsorted[i];
                unsorted[i] = unsorted[i+1];
                unsorted[i+1] = temp;
            }
        }
    }
}



int main(){
    int unsorted[] = {3,9,5,3,1,1,4,5};
    int length = sizeof(unsorted) / sizeof(unsorted[0]);

    bubble_sort(unsorted, length);
    for(int i = 0; i<length-1;i++){
        printf("%d,",unsorted[i]);
    }
}