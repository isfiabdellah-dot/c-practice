// Requirements
// The function receives a pointer to an int.
// It must store the value: 42
// in the integer pointed to by the pointer.

#include <unistd.h>

void	ft_ft(int *nbr);
int main(){
    int nbr = 0;
    ft_ft(&nbr);
}

void	ft_ft(int *nbr){
    *nbr = 42;
}