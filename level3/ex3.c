//The Dynamic 2D Grid (Double Pointers **)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int cols = 0;
    int rows = 0;

    printf("\nEnter the number of rows :");
    scanf("%d",&rows);
    printf("\nEnter the number of colomns :");
    scanf("%d",&cols);

    int **grid = malloc(rows*sizeof(int*));
    for(int i = 0 ; i<rows ; i++){
        grid[i] = malloc(cols*sizeof(int));        
    }
    
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ; j<cols ; j++){
            grid[i][j] = i * j;
        }    
    }
    
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ; j<cols ; j++){
            printf("%4d",grid[i][j]);
        }    
        printf("\n");

    }
    for(int i = 0 ; i<rows ; i++){
           free(grid[i]);
    }

    free(grid);
    
    return 0;
}