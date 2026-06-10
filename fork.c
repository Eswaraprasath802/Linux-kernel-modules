#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid ;
    pid = fork();//it creates the two process
    if(pid == 0)
    {
        printf("Child Process\n");
    }
    else
    {
        wait(NULL); //Don't continue.Wait until one child process finishes.
        printf("Parent Process\n");
    }

    return 0;
}