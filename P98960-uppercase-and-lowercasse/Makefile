compilar:
	g++ -c -o main.o main.cc
	g++ -c -o upper-to-lower-func.o upper-to-lower-func.cc

upper: upper-to-lower-func.o main.o upper-to-lower.h
	g++ -o upper upper-to-lower-func.o main.o

clean: 
	rm -f main *.o ficheroSalida.txt