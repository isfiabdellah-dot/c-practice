#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{   char buffer[1024];
    int total = 0;

    int fd = open("hello.txt",O_RDONLY);// open file
    int bytes_size;
    if(fd == -1){           //error handler
        write(2,"Cannot open notes\n", 18);
        return 1;
    }
    
    while((bytes_size = read(fd, buffer , sizeof(buffer))) > 0){ //count file size
        total+= bytes_size;
    }
        
    close(fd);
    
    
    printf("The size of your file is :%d", total);
    return 0;
}