#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);
int main(){
    int tab[7] = {9,8,6,4,2,3,7};

    for(int i ; i<7 ; i++){
        printf("%d ",tab[i]);
    }

    ft_sort_int_tab(tab, 7);

    printf("\n");
    for(int i ; i<7 ; i++){
        printf("%d ",tab[i]);
    }

    return 0;
}
void ft_sort_int_tab(int *tab, int size){
    
    int temp=0;
    int i = 0;
    int j = 0;

    for(i ; i<size ; i++){
        j = 0;
        for(j ; j<size-1 ; j++){
            if(tab[j]>tab[j+1]){
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
    
}
