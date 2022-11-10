#include <iostream>
#include "numbers.h"

void Numbers() {
  int numero1, numero2;
  //std::cout << "Ingrese los dos numeros para delimitar el intervalo: " << std::endl;
  std::cin >> numero1;
  std::cin >> numero2;
  for(int i = numero1; i <= numero2; i++){
    std::cout << numero1++ << ",";
  }
  std::cout << std::endl;
  return;
}