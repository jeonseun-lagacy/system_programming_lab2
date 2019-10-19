all:dynamic_main static_main shared_main

static_main: main.c
	gcc -static -I./lib -L./lib -o static_main main.c -larithmetic
shared_main : main.c
	gcc -I./lib -L./lib -o shared_main main.c -larithmetic
dynamic_main: dlmain.c
	gcc -rdynamic -o dynamic_main dlmain.c -ldl
clean:
	rm -f *_main

