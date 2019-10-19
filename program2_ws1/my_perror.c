#include <string.h>
#include <errno.h>
#include <stdio.h>
void my_perror(const char *s)
{
	if(!strcmp(s, "fopen")){
		printf("%s:%s\n",s,strerror(errno));	
	}
}
