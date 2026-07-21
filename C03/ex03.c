
#include <stdio.h>


char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(){
   
    char ms1[]="Hello ";
    char ms2[]="World";
    printf("befor: %s\n",ms1);
    ft_strncat(ms1, ms2, 8);
    printf("after: %s",ms1);
    
}
char	*ft_strncat(char *dest, char *src, unsigned int nb){
    char *ptr=dest;
    while(*dest!='\0'){
        dest++;
    }
    while(*src!='\0' && nb>0){
        *dest=*src;
        dest++;
        src++;
        nb--;
    }
    *dest='\0';
    return ptr;
}

