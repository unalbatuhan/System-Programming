#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

main (){
	pid_t pid;
	pid = fork ();
	if (pid == 0)
		printf("ben cocuk %d\n", pid);
	else
		printf("ben anne %d\n",pid);
}