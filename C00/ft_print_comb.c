#include <unistd.h>

void ft_print_comb(void);
int main(){

    ft_print_comb();
    return 0;
}
void ft_print_comb(void){
    char frt = '0';
    while(frt <= '7'){
        char scd = frt + 1;
        while(scd <= '8'){
            char trd = scd + 1;
            while(trd <= '9'){
                write(1,&frt,1);
                write(1,&scd,1);
                write(1,&trd,1);

                if(!(frt=='7' && scd=='8' && trd=='9')){
                    write(1,", ",2);
                }   
                trd++;
            }
            scd++;
        }
        frt++;
    }
}

