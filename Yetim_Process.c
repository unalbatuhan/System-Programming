#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
main()
{
pid_t pid;
pid = fork();
if(pid == 0)
{
printf("Cocuk proses %d\n", getpid());
printf("Anne PID %d\n", getpid());
sleep(5);
printf("Cocuk proses geri dondu\n");
printf("Anne PID %d\n", getpid());
}
else
printf("Anne proses\n");
}
