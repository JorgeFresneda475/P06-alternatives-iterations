#include <iostream>

int main() {
  std::string cadena_numeros;
  int numero;
  std::cout << "Inserte el numero (n): " << std::endl;
  std::cin >> numero;
  std::cout << "Inserte los numeros: " << std::endl;
  std::cin >> cadena_numeros;
  if( numero == cadena_numeros.size() ) {
    for(int i = 0; i <= cadena_numeros.size(); i++){
       if(cadena_numeros[i] / cadena_numeros[i] == 1) {
         std::cout << numero << "is prime" << std::endl;
       }
       else{
        std::cout << numero << "is not prime" << std::endl;
       }
    }
  }
}

