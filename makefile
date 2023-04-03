a.out: bubblemain.o bubblesort.o
	gcc -o a.out bubblemain.o bubblesort.o

bubblemain.o: bubblemain.c bubblesort.h
	gcc bubblemain.c -o bubblemain.o -c

bubblesort.o: bubblesort.c bubblesort.h
	gcc bubblesort.c -o bubblesort.o -c

clean: 
	rm *.o a.out
