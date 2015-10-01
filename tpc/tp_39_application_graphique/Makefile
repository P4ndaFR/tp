app_graphique.exe:main.o fonctions.o
	gcc  main.o fonctions.o -lSDL -o app_graphique.exe
main.o:main.c header.h
	gcc -Wall -Wconversion -g -c main.c
fonctions.o:fonctions.c header.h
	gcc -Wall -Wconversion -g -c fonctions.c
clean:
	rm *.o header.exe