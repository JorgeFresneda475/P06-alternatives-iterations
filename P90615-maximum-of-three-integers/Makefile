compilar:
	g++ -c -o main.o main.cc
	g++ -c -o maximum-func.o maximum-func.cc

maximum: maximum-func.o main.o maximum.h
	g++ -o maximum maximum-func.o main.o

clean: 
	rm -f main *.o ficheroSalida.txt