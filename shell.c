#include<stdio.h>
#include<unistd.h>

/**

*/


int main(int args ,char *argv[] ,char *env[]) {

char cmd[] = {"/bin/sh",NULL};
char env[] = {NULL};

execve(
cmd[0],
NULL,
NULL
);

dprintf(STDERR_FILENO,"%s command cannot be found" cmd[0]);
return 0;

}

