#include <fcntl.h>
#include <errno.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int fd;
    fd = open(argv[1], O_RDONLY|O_NOFOLLOW);
    if(fd == -1){
        perror("Open ");
        return(errno);
    }
    puts("0");
    return 0;
}
