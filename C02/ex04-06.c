#include <unistd.h>
#include <stdio.h>



int	ft_str_is_printable(char *str);
int main(){
    
    char msg[]= "aaaa";
    char *ptr = msg;
    printf("%d", ft_str_is_printable(msg));
    
}





int ft_str_is_lowercase(char *str){ 
    while(*str!='\0'){ 
        if(!(*str>='a' && *str<='z') ){return 0;} 
        str++; } 
        return 1; 
}

int ft_str_is_uppercase(char *str){ 
    while(*str!='\0'){ 
        if(!(*str>='A' && *str<='Z') ){return 0;} 
        str++; 
    } 
    return 1; 
}

int	ft_str_is_printable(char *str){
    while(*str!='\0'){
        if(*str<' ' ||*str>'~' ){return 0;}
        str++;
    }
    return 1;
}