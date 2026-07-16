#include <unistd.h>

void ft_print_numbers(void);

int main(){
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void){
    char d = '0';
    while(d<='9'){
        write(1,&d,1);
        d++;
    }

}
 