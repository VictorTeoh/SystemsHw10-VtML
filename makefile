all: signals.c
	gcc -o signals signals.c
run: all
	./signals
clean:
	rm *~
