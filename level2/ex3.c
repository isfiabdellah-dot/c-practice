
#include <stdio.h>

int main(){

    char *fruits[] = {"Apple", "Banana", "Cherry"};

    int num = sizeof(fruits)/ sizeof(fruits[0]) ;
    
  

    for(int i ; i<num ; i++){
        printf("%s ",fruits[i]);
    }
    printf("\n");
    for(int i ; i<num ; i++){
        printf("%c ",*fruits[i]);
    }

return 0;
}