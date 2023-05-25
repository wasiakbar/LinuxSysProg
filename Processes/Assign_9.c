#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Enter...\n1 for execlv\n2 for execve\n3 for execle\n");
    int option;
    scanf("%d",&option);
    switch(option){
        case 1: {   printf("Running ls -l  execlv\n");
                    char *arg[] = {"ls","-l","/",NULL};
                    execv("/bin/ls",arg);
                    break;
                }
        case 2: {   printf("Running /bin/sh env  execve\n");     
                    char *arg1[] = {NULL};
                    char* env[] = { "ALIAS=environment", NULL };
                    execve("/bin/sh",arg1,env); //type env to get environmnet vars in newly executed shell 
                    break;
                }
        case 3: {   printf("Running /bin/sh env  execle\n");     
                    char* env[] = { "ALIAS=environment", NULL };
                    execle("/bin/sh", "env",NULL,env);
                    break;
                }
        default:
                printf("Enter right choice\n");
                break;
    }
	printf("Done.\n");
	exit(0);
}
