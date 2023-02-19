#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int ac, char **av)
{
 int i;

 for (i=av[i]; i!=NULL; i++)
 {
     printf('%s',av[i]);
 }
 printf('\n');
 return (0);
}
