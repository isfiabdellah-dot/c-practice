#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
int main(){
    char msg[] = "Hello !!";
    char msgc[20]={0};
    ft_putstr(msgc);

    ft_strcpy(msgc,msg);
    write(1,"\n",1);
    
    ft_putstr(msgc);
    

}

char *ft_strcpy(char *dest, char *src){
   char *ptr = dest;
    while(*src !='\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest= '\0';
    
    return ptr;
}

void	ft_putstr(char *str){
    
    while(*str != '\0'){
        write(1,str,1);
        str++;
    }
}