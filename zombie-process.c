#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
const int MSH_LENGTH=80;
int main(int argc, char** argv) 
{
    pid_t child_pid, my_pid, parent_pid;
    child_pid = fork();
    parent_pid = getppid();
    my_pid = getpid();

if(child_pid!=0 && child_pid>0){//parent process is killed
    printf("Parent process dies,\n child process become zombie process for 3 seconds.\n");
    exit(0);
}
else if(child_pid==0){
            sleep(3); //3 second zombie process
        }

system("ps");
}