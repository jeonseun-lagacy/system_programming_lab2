OBJECTS = add.o subtract.o multiply.o divide.o
CFILES = add.c subtract.c multiply.c divide.c
all: libarithmetic.a libarithmetic.so.1.0.1

libarithmetic.a:$(OBJECTS)
	ar rcs $@ $^
libarithmetic.so.1.0.1:$(OBJECTS)
	gcc -shared -Wl,-soname,libarithmetic.so.1 -o $@ $(OBJECTS)
	ln -s libarithmetic.so.1.0.1 libarithmetic.so.1
	ln -s libarithmetic.so.1.0.1 libarithmetic.so
$(OBJECTS): $(CFILES)
	gcc -c $(CFILES)
clean:
	rm -f *.o libarithmetic.a libarithmetic.so.1.0.1 libarithmetic.so.1 libarithmetic.so
