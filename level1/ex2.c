#include <stdio.h>

int main(){

    double pi = 3.14159;
    double *pPi = &pi;
    
    printf("size of pi %d\n", sizeof(pi));
    printf("size of pPi %d\n", sizeof(pPi));
    printf("size of data pPi points to :  %d\n", sizeof(*pPi));
    
    return 0;

    //The pointers always have 8 bytes size on a 64-bit system in and 4 32-bit system, 
    //which is the size of the address he's holding, 
    //whatever the type he is pointing to.
}