polynome.exe:main.o fonctions.o
	gcc  main.o fonctions.o -o polynome.exe
main.o:main.c polynome.h
	gcc -Wall -Wconversion -g -c main.c
fonctions.o:fonctions.c polynome.h
	gcc -Wall -Wconversion -g -c fonctions.c
clean:
	rm *.o polynome.exe