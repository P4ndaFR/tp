liste_chainees.exe:main.o fonctions.o
	gcc  main.o fonctions.o -o liste_chainees.exe
main.o:main.c header.h
	gcc -Wall -Wconversion -g -c main.c
fonctions.o:fonctions.c header.h
	gcc -Wall -Wconversion -g -c fonctions.c
clean:
	rm *.o liste_chainees.exe