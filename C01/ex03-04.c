#include <unistd.h>

int main(){
   

    return 0;
}

void	ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

void	ft_ultimate_div_mod(int *a, int *b){
    int x =*a;
    *a /= *b;
    *b = x % *b;
}