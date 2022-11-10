compilar:
	g++ -c -o main.o main.cc
	g++ -c -o harmonic-numbers-func.o harmonic-numbers-func.cc

harmonic: harmonic-numbers-func.o main.o harmonic-numbers.h
	g++ -o harmonic harmonic-numbers-func.o main.o

clean: 
	rm -f main *.o ficheroSalida.txt
