#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int	ft_strcmp(char *s1, char *s2);
int main(){
   
    char ms1[]="abc";
    char ms2[]="abcd";

    int result=ft_strcmp(ms1, ms2);
    if(result>0){
        printf("ms1 is greater than ms2");
    }else if(result==0){
        printf("ms1 and ms2 are identical");
    }else{
        printf("ms1 is smaller than ms2");
    }

}
int	ft_strcmp(char *s1, char *s2){
    while(*s1==*s2 && *s1!='\0'){
        s2++;
        s1++;
    }
    return *s1-*s2;
}