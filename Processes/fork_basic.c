#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t child_pid;

	printf("The main program process id is %d\n", (int)getpid());
	//TODO 1: Invoke the fork and get the return value in child_pid
	child_pid=fork();
	//TODO 2: Display the parent, self and child process id in parent process
	if(child_pid==0)
		printf("PPID:%lu\tPID:%lu\tCPID:%lu\n",getppid(),getpid(),child_pid);
	//TODO 3: Display the self and parent process id in the child process
	else
		printf("PPID:%lu\tPID:%lu\tCPID:%lu\n",getppid(),getpid(),child_pid);
	return 0;
}
