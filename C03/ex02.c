#include <stdio.h>


char *ft_strcat(char *dest, char *src);
int main(){
   
    char ms1[]="Hello ";
    char ms2[]="World";
    printf("%s\n",ms1);
    ft_strcat(ms1, ms2);
    printf("%s",ms1);

}
char *ft_strcat(char *dest, char *src){
    char *ptr=dest;
    while(*dest!='\0'){
        dest++;
    }
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    return ptr;
}