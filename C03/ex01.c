#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strcmp(char *s1, char *s2);
int main(){
   
    char ms1[]="abdd";
    char ms2[]="abc";

    int result=ft_strncmp(ms1, ms2 , 3);
    if(result>0){
        printf("ms1 is greater than ms2");
    }else if(result==0){
        printf("ms1 and ms2 are identical");
    }else{
        printf("ms1 is smaller than ms2");
    }

}
int ft_strncmp(char *s1, char *s2, unsigned int n){
    if(n==0){
        return 0;
    }
    while(*s1==*s2 && *s1!='\0' && *s2!='\0' && n>0){
        n--;
        if(n==0){return *s1-*s2;}
        s1++;
        s2++;
    }
    return *s1-*s2;
}

int	ft_strcmp(char *s1, char *s2){
    while(*s1==*s2 && *s1!='\0' && *s2!='\0'){
        s2++;
        s1++;
    }
    return *s1-*s2;
}