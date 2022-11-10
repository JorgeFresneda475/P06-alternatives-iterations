#include <iostream>
#include "upper-to-lower.h"

void UppertoLower() {
  char letra, letra_mayuscula, letra_minuscula;
  //std::cout << "Introduzca una letra mayuscula o minuscula: " << std::endl;
  std::cin >> letra;
  letra_mayuscula = toupper(letra);
  letra_minuscula = tolower(letra);
  if(letra >='a' & letra <='z'){
    std::cout << letra_mayuscula << std::endl;
  }
  if(letra >='A' & letra <='Z'){
    std::cout << letra_minuscula << std::endl;
  }
  return;
}