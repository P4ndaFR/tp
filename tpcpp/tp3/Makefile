tp2.exe:main.o String.o
	g++ main.o String.o -o tp2.exe
main.o:main.cpp String.h
	g++ -g -c main.cpp
String.o:String.cpp String.h
	g++ -g -c String.cpp
clean:
	rm tp1.exe *.o *.gch