#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    char buffer[1024];
    int bytes_reads;

    if(argc != 3){//Error handler for not passing any argument (file)
        write(2 , "error no argument include !" , sizeof("error no argument include !"));
        return 1;
    }

    int fd = open(argv[1] , O_RDONLY);

    if(fd < 0){ //Error handler for the first argument (file)
        write(2 , "error opening file 1 !" , sizeof("error opening file 1 !"));
        return 1;
    }

    int fdc = open(argv[2],
               O_WRONLY | O_CREAT | O_TRUNC,
               0644);

    if(fdc < 0){ //Error handler for the second argument (file)
        write(2 , "error opening file 2 !" , sizeof("error opening file 2 !"));
        return 1;
    }

    // while(read(fd , buffer , sizeof(buffer)) > 0){       
    //     write(fdc , buffer , sizeof(buffer));
    // }

    //IT CAUSE THIS:
    //The strange characters at the end (like �, DEL, and random symbols) 
    //are a strong sign that you're writing more bytes than were actually read.

    //CORRECT WAY:
    while((bytes_reads=read(fd , buffer , sizeof(buffer))) > 0){
        write(fdc , buffer , bytes_reads);
    }

    write(1 , "success" ,sizeof("success"));

    close(fd);
    close(fdc);

    return 0;
}