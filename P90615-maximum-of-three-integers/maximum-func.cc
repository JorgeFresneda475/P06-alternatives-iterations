#include <iostream>
#include "maximum.h"

void Maximum() {
  int numero1, numero2, numero3;
  //std::cout << "Introduzca los 3 números: " << std::endl;
  std::cin >> numero1;
  std::cin >> numero2;
  std::cin >> numero3;
  if(numero1 > numero2 && numero1 > numero3){
    std::cout << numero1 << std::endl;
  }
  if(numero2 > numero1 && numero2 > numero3){
    std::cout << numero2 << std::endl;
  }
  if(numero3 > numero1 && numero3 > numero2){
    std::cout << numero3 << std::endl;
  }
  return;
}