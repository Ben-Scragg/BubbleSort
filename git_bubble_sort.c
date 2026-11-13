#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

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
    int *unsorted;
    int value;
    //int length = sizeof(unsorted) / sizeof(unsorted[0]);
    int length = 0;
    unsorted = malloc(sizeof(int)*100);
    printf("How many elements would you like to sort: enter the number here\n");
    scanf("%d", &length);
    for (int i = 0; i<length; i++){
        printf("Enter value %d: \n", i+1);
        scanf("%d",&value);
       
        unsorted[i] = value;
    }

    printf("This is the array before being sorted\n");

    for(int i = 0; i<=length-1;i++){
        if(i != length-1){
            printf("%d,",unsorted[i]);
            continue;
        }
        printf("%d",unsorted[i]);
    }

    printf("\nThis is the array after being sorted\n");
    bubble_sort(unsorted,length);

    for(int i = 0; i<=length-1;i++){
        printf("%d,",unsorted[i]);
    }
    

}