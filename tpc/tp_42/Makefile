test.exe:main.o libtest.so
	gcc main.o -L. -ltest -o test.exe;strip test.exe
libtest.so:f1.o f2.o f3.o
	gcc -shared -fPIC -o libtest.so f1.o f2.o f3.o
main.o:main.c f.h
	gcc -fPIC -c main.c
f1.o:f1.c f.h
	gcc -fPIC -c f1.c
f2.o:f2.c f.h
	gcc -fPIC -c f2.c
f3.o:f3.c f.h
	gcc -fPIC -c f3.c
clean:
	rm *.o *.exe *.so