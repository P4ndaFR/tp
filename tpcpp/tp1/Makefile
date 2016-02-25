tp2.exe:main.o Individu.o
	g++ main.o Individu.o -o tp1.exe
main.o:main.cpp Individu.h Professeur.h Eleve.h
	g++ -c main.cpp
Individu.o:Individu.cpp Individu.h
	g++ -c Individu.cpp
clean:
	rm tp1.exe *.o *.gch
