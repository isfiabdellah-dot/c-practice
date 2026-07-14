//Exercise 3.1: The Dynamic Number Vault
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0;
    printf("How many numbers do you want to store : ");
    scanf("%d",&n);

    int *arr = malloc(n*sizeof(int));
    if (arr==NULL){
        printf("\nerror");
        return 1;
    }

    for(int i = 0 ; i<n ; i++){
        printf("\nEnter the number %d for the memory %p:",i+1,arr);
        scanf(" %d",&arr[i]);

    }

    for(int i ; i<n ; i++){
        printf("\n%d ",arr[i]);
    }


    free(arr);
return 0;
}