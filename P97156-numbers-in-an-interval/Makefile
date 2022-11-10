compilar:
	g++ -c -o main.o main.cc
	g++ -c -o numbers-func.o numbers-func.cc

numbers: numbers-func.o main.o numbers.h
	g++ -o numbers numbers-func.o main.o

clean: 
	rm -f main *.o ficheroSalida.txt