
#include <stdio.h>

int main(){

int x = 25;
int *ptr;
ptr = &x;

printf("addresse of x from &x : %p\n",&x);
printf("addresse of x from ptr : %p\n",ptr);

printf("value of x from &x : %d\n", x);
printf("value of x from *ptr : %d\n",*ptr);

*ptr=99;
printf("value of x after changing value : %d\n", x);

return 0;
}