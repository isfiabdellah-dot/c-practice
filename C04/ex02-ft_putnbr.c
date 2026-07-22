#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>



void ft_putnbr(int nb);
void ft_putchar(char c);
int main(){
    ft_putnbr(657);
    
  
}
//Iterative Version (Array-Based)
void	ft_putnbr(int nb){    
    int i = 0;
    char digite[11];
    if(nb==0){
        write(1,"0",1);
    }
    if(nb==-2147483648){
        write(1,"-2147483648",11);
        return;
    }
    if(nb<0){
        write(1,"-",1);
        nb=-nb;
    }

    while(nb>0){
        digite[i]= (nb%10) + '0';
        i++;
        nb/=10;
    }

    while(i>0){
        i--;
        write(1,&digite[i],1);
    }
    
}

//Recursive Version
void	ft_putnbr(int nb){
    char digite;
    if(nb==-2147483648){
        write(1,"-2147483648",11);
        return;
    }
    if(nb<0){
        write(1,"-",1);
        nb=-nb;
    }
    
    if (nb>=10){
        ft_putnbr(nb / 10);
        
    }

    digite = (nb%10) +'0';
    write(1,&digite,1);
}


void ft_putchar(char c){
    write(1,&c,1);
}