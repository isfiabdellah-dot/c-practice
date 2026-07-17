#include <unistd.h>

int	ft_strlen(char *str);
int main(){
    char mystr[]="Hello World!";
    ft_strlen(mystr);
    
    return 0;
}
int	ft_strlen(char *str){
    int len =0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}