#include <stdbool.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
int	ft_strcmp(char *s1, char *s2);
int main(){
   
    char ms1[]="Hello world";
    
    printf("%s",ft_strstr(ms1, "o"));
    
    
}
char	*ft_strstr(char *str, char *to_find){
    char *tem_str=str;
    char *tem_to_find=to_find;
    char *start;

    if(*to_find=='\0'){return str;}

    while(*tem_str!='\0'){  
        start = tem_str;
        tem_to_find = to_find;
        while(*tem_str==*tem_to_find && *tem_to_find!='\0'){
            tem_str++;
            tem_to_find++;
 
            if(*tem_to_find=='\0'){
                return start;   
            }
        }
        tem_str = start;
        tem_str++; 
    }   
    return NULL;
}

