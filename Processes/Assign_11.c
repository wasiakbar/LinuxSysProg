#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t child_pid;

	child_pid=vfork();
	if(child_pid==0){
		printf("Child Context: PPID:%lu\tPID:%lu\tCPID:%lu\n",getppid(),getpid(),child_pid);
        printf("Suspending parent process..\n");
   //     sleep(2);
    }
	else{
        printf("\n\nParent Context: Child Exited !!\n");
		printf("Parent Context: PPID:%lu\tPID:%lu\tCPID:%lu\n",getppid(),getpid(),child_pid);
    }
    if(child_pid==0){
        printf("Child gone to sleep for 5 seconds\n");
        sleep(5);
    } 
       

	return 0;
}
