output: main.o cards.o
	gcc main.o cards.o -o output

main.o: main.c cards.h
	gcc -c main.c -o main.o

route-records.o: cards.c cards.h
	gcc -c cards.c -o cards.o

clean:
	rm -rf *.o 
	rm output