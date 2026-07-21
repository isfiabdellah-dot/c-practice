#include <stdbool.h>
#include <stdio.h>
char *ft_strcat(char *dest, char *src);
int	ft_strlen(char *str);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main(){
   
    char ms1[2]="hello ";
    char ms2[]="world";
    
    printf("ft_strlcat return: %d\n",ft_strlcat(ms1,ms2,5));
    printf("%s\n",ms1);
    
    
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    
    char *tem_dest = dest;
    char *tem_src = src;

    unsigned int len_dest = ft_strlen(dest);
    unsigned int len_src = ft_strlen(src);
    
    unsigned int sum=0;
    int r =0;
   
    if(size > len_dest){
        sum = len_dest + len_src;
    }
    else if(len_dest >= size){
        sum = size + len_src;
    }

    while(*tem_dest!='\0'){
        tem_dest++;
    }

    if(size > len_dest){
        r = size - len_dest -1;
        while(r>0 && *tem_src!='\0'){
            *tem_dest = *tem_src;
            tem_dest++;
            tem_src++;
            r--;
        }
        *tem_dest='\0';
        return sum;
    }else{ 
        return sum;
    }
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
int	ft_strlen(char *str){
    int len =0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}