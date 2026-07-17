#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
int main(){
    int tab[7] = {1,2,3,4,5,6,7};
    for(int i ; i<7 ; i++){
        printf("%d ",tab[i]);
    }

    ft_rev_int_tab(tab, 7);
    printf("\n");
    for(int i ; i<7 ; i++){
        printf("%d ",tab[i]);
    }
    return 0;
}
void	ft_rev_int_tab(int *tab, int size){
    int temp;
    for(int i=0 ; i<(size/2) ; i++){
        temp = tab[i];
        tab[i]=tab[size-1-i];
        tab[size-1-i]=temp;
    }
    
}