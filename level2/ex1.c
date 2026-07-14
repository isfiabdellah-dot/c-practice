//Exercise 2.1: Walk the Array (Pointer Arithmetic)
#include <stdio.h>

int main(){

int arr[] = {10, 20, 30, 40, 50, 60};
int *pArr = arr;

for(int i=0;i<6;i++){

    printf("index %d | value %d | address %p\n",i,*pArr,pArr);
    pArr++;
}
return 0;
}