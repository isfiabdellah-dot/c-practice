#include <unistd.h>
#include <stdio.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main(){
    
    
    
}
char	*ft_strncpy(char *dest, char *src, unsigned int n){
    char *ptr;
    ptr = dest
    unsigned int i;
    i = 0;
    while(n>i){
        if(*src=='\0'){
            *dest ='\0';
            i++;
            dest++;
        }else{
            *dest = *src;
            i++;
            dest++;
            src++;
        }
    }
    return ptr;
}

