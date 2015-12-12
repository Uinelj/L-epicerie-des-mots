#Makefile du projet : "L'épicerie des mots"

all : epicerieDesMots

epicerieDesMots: libdico.o libstack.o libio.o mainCli.o
	gcc -o epicerieDesMots libdico.o libstack.o libio.o mainCli.o

libdico.o: libdico.c libdico.h
	gcc -o libdico.o -c libdico.c

libstack.o: libstack.c libstack.h
	gcc -o libstack.o -c libstack.c

libio.o: libio.c libio.h
	gcc -o libio.o -c libio.c

mainCli: mainCli.c libstack.h libio.h libdico.h
		gcc -o mainCli.o -c mainCli.c

clean:
	rm -f *.o epicerieDesMots
