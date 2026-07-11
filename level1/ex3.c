#include <stdio.h>

void swap_v(int *x,int *y);

int main(){

    int a = 3;
    int b = 8;

    printf("a value :%d\n",a);
    printf("b value :%d\n",b);
    
    swap_v(&a,&b);

    printf("a value :%d\n",a);
    printf("b value :%d\n",b);


    return 0;

}

void swap_v(int *x,int *y){
    int buffer=0;
    buffer = *x;
    *x = *y;
    *y = buffer;
}