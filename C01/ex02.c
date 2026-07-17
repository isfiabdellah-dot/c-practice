#include <unistd.h>

void	ft_swap(int *a, int *b);
int main(){
   

    return 0;
}
void	ft_swap(int *a, int *b){
    int buffer;
    buffer = *a;
    *a  = *b;
    *b = buffer;

}