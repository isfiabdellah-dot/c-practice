#include <unistd.h>
#include <stdio.h>



char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int main(){
    
    char msg[]= "saLUt'&, @comMEnt -tu ~vas ? --hello-world appel";
    char *ptr = msg;
    printf("%s",ft_strcapitalize(msg));
    
}
char	*ft_strupcase(char *str){
    char *ptr;
    ptr=str;
    while(*str!=0){
        if(*str>='a' && *str<='z'){
            *str-=32;
        }
        str++;
    }
    return ptr;
}
char	*ft_strlowcase(char *str){
    char *ptr;
    ptr=str;
    while(*str!=0){
        if(*str>='A' && *str<='Z'){
            *str+=32;
        }
        str++;
    }
    return ptr;
}
char	*ft_strcapitalize(char *str){
    char *ptr;
    ptr=str;
    int i = 1;
    ft_strlowcase(str);
    while(str[i]!=0){
        if((str[i-1]>=' ' && str[i-1]<'0') ||(str[i-1]>'9' && str[i-1]<'A') || (str[i-1]>'Z' && str[i-1]<'a') || (str[i-1]>'z' && str[i-1]<='~')){  
           if(str[i]>='a' && str[i]<='z'){str[i]-=32;}    
        }
        i++;
    }
    if(*ptr>='a' && *ptr<='z'){*ptr-=32;}
    return ptr;
}