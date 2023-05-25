#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int cpid, status;
	cpid = fork();
	if(cpid>0){
		printf("Parent waiting...\n");
		sleep(10);
	}
	else{
		printf("Child created and exited..\n");
		exit(0);
	} 
}
