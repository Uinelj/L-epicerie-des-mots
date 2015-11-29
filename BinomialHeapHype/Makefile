all : binHeap

binHeap : mainBinHeap.o binHeap.o
	gcc mainBinHeap.o binHeap.o -o binHeap

mainBinHeap.o : mainBinHeap.c
	gcc -c mainBinHeap.c

binHeap.o : binHeap.c
	gcc -c binHeap.c

clean:
	rm *o binHeap
