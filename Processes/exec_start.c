// Using exec function
// This program calls exec_overlay program using exec function

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
	printf("Before exec my id is %d\n", getpid());
	printf("My Parent process's id is %d\n", getppid());

	printf("exec starts\n");
	//TODO 1: Execute exec_overlay with execl function
	execl("exec_overlay",NULL); 
	printf("This won't print\n");
	return 0;
}
