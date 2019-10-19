#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
int main()
{
	void *handle;
	int (*add)(int, int), (*subtract)(int, int), (*multiply)(int, int),             (*divide)(int, int);
	char *error;
	
	handle = dlopen("./lib/libarithmetic.so", RTLD_LAZY);
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}

	add = dlsym(handle, "add");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	subtract = dlsym(handle, "subtract");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	multiply = dlsym(handle, "multiply");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	divide = dlsym(handle, "divide");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	printf("add(3,5) = %d\n",(*add)(3,5));
	printf("subtract(3,5) = %d\n",(*subtract)(3,5));
	printf("multiply(3,5) = %d\n",(*multiply)(3,5));
	printf("divide(3,5) = %d\n",(*divide)(3,5));
	dlclose(handle);
	return 0;
}
