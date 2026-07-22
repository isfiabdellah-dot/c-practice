int	ft_strlen(char *str){
    int len =0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}


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