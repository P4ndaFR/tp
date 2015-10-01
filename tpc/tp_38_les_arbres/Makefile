arbre.exe:main.o fonctions.o
	gcc  main.o fonctions.o -lm -o arbre.exe
main.o:main.c arbre.h
	gcc -Wall -Wconversion -g -c main.c
fonctions.o:fonctions.c arbre.h
	gcc -Wall -Wconversion -g -c fonctions.c
clean:
	rm *.o arbre.exe