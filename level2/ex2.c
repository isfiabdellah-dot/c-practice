
#include <stdio.h>
int string_length(char *str);
int main(){

    char mes[]="Hello C World!";
    printf("mes lenght is : %d",string_length(mes));

return 0;
}

int string_length(char *str){
    int length = 0;
    while(*str !='\0'){
        length++;
        str++;
    };
    return length;
}