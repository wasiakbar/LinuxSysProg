#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int status, i;
    pid_t child1,child2;

    child1 = fork();
    if (child1 == 0)
    {
        printf("Child1 executed...\n");
        for (i = 0; i < 10; i++)
        {
            sleep(1);
        }
    }

    if(child1!=0){
        child2 = fork();
        if (child2 == 0)
        {
            printf("Child2 executed...\n");
            for (i = 0; i < 10; i++)
            {
                sleep(1);
            }
        }
    }
    if(child1>0 && child2>0)
    {
        // TODO 1: Wait for the child process termination
        waitpid(child1, &status, 0);
        // TODO 2: Print the exit code, if process exited normally
        if(status==0)
            printf("Child1 exited normally : %d\n",status);
    }
    return 0;
}
