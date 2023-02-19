#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
 pid_t my_pid, my_ppiid;

 my_pid = getpid();
 my_ppiid = getppid();
 printf("%u\n %u\n", my_pid, my_ppiid);
 return(0);
}
