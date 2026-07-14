//Exercise 3.2: The Factory Function 
// (Returning Pointers)


#include <stdio.h>
#include <stdlib.h>

int* create_fibonacci(int length);

int main(){

    int *myArr = create_fibonacci(8);

    for(int i=0 ; i<8 ; i++){
        printf("%d ",myArr[i]);
    }
   
return 0;
}
int* create_fibonacci(int length){
    int *arr = malloc(length*sizeof(int));
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2 ; i<length ; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr;
}