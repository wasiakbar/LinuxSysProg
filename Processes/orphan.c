#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t child_pid;
	child_pid = fork();
	if(child_pid==0){
		sleep(10);
		if(getppid()==1){
			printf("Adopted by Init\n");
		}
	}
	else{
		printf("Parent exited..\n");
		printf("wait for 10 seconds..\n");
		//exit(0);
	} 
		
	return 0;
}
