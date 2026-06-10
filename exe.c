#include <unistd.h>

int main()
{
    char *args[] = {"/bin/python3", NULL};

    execve("/bin/python3", args, NULL);

    return 0;
}