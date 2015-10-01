graph.exe:main.o fonctions.o
	gcc  main.o fonctions.o -lm -o graph.exe
main.o:main.c graph.h
	gcc -Wall -Wconversion -g -c main.c
fonctions.o:fonctions.c graph.h
	gcc -Wall -Wconversion -g -c fonctions.c
clean:
	rm *.o graph.exe