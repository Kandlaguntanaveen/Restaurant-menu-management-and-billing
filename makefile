OBJ = $(patsubst %.c, %.o, $(wildcard *.c))
a.out : $(OBJ)
	gcc -o $@ $^
clear :
	rm *.o *.out