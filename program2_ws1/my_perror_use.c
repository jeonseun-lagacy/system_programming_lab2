#include <stdio.h>
#include <stdlib.h>
#include "my_perror.h"

int main(int argc, char *argv[])
{
	FILE *f;

	if (argc < 2){
		fprintf(stderr,"Usage: my_perror_use file_name\n");
		exit(1);
	}

	if((f = fopen(argv[1], "r")) == NULL){
		my_perror("fopen");
		exit(1);
	}

	printf("Open a file \"%s\".\n", argv[1]);
	fclose(f);
	return 0;
}