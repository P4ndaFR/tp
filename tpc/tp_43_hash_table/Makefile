hash_table.exe:main.o fonctions.o
	gcc  main.o fonctions.o -lm -o hash_table.exe
main.o:main.c hash_table.h
	gcc -Wall -Wconversion -g -c main.c
fonctions.o:fonctions.c hash_table.h
	gcc -Wall -Wconversion -g -c fonctions.c
clean:
	rm *.o hash_table.exe