compilar:
	g++ -c -o main.o main.cc
	g++ -c -o add-one-second-func.o add-one-second-func.cc

add: add-one-second-func.o main.o add-one-second.h
	g++ -o add add-one-second-func.o main.o

clean: 
	rm -f main *.o ficheroSalida.txt