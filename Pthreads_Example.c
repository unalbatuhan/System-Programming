#include <pthread.h>
#include <stdio.h>
int sum; /* this data is shared by the threads(s) */
void runner(void *param); /* threads call this function */
int main(int argc, char *argc[])
{
pthread_t tid; /* the thread identifier */
pthread_attr_t attr; /* set of thread attiributes */
if(args != 2){
fprintf(stderr,"usage: a.out <integer value>\n");
return -1;
}
if (atoi(argv[1] < 0)){
fprintf(stderr, "%d must be > = 0\n", atoi(argv[1]));
return -1;
}
