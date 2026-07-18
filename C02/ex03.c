


#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>


int	ft_str_is_numeric(char *str);
int main(){
    
    char msg[]= "111222333D";
    char *ptr = msg;
    printf("%d", ft_str_is_numeric(msg));
    
}

int	ft_str_is_numeric(char *str){
    while(*str!='\0'){
        if(!(*str>='0' && *str<='9' ) ){return 0;}
        str++;
    }
    return 1;
}