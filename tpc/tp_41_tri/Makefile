tri.exe:main.o fonctions.o
	gcc  main.o fonctions.o -o tri.exe
main.o:main.c tri.h
	gcc -Wall -Wconversion -g -c main.c
fonctions.o:fonctions.c tri.h
	gcc -Wall -Wconversion -g -c fonctions.c
clean:
	rm *.o tri.exe