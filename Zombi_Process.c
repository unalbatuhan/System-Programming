#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
main()
{
pid_t pid;
pid = fork();
if (pid == 0)
exit(0);
else
sleep(30);
}

