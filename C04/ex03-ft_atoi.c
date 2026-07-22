#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>


void ft_putnbr(int nb);
void ft_putchar(char c);
int ft_atoi(char *str);

int main(){
    char str[]="+74 8r3647";

    printf("%d",ft_atoi(str));

  
}
int ft_atoi(char *str){
    char *s = str;
    int nb=0;
    int n=1;
    
    //look for digit in the string
    while(*s==' ' || *s=='\n' || *s=='\t' || *s=='\f' || *s=='\v' || *s=='\r'){
        s++;
    }
    
    while(*s=='+' || *s=='-' ){
        if(*s=='-'){n*=(-1);}
        s++;
    }
    
    while(*s>='0' && *s<='9'){
        nb =(nb*10)+(*s -'0');
        s++;
    }
    
    return nb*n;
   
}