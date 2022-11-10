#include <iostream>
#include <iomanip>
#include "harmonic-numbers.h"

void HarmonicNumbers() {
  float numero, suma = 1.00;
  //std::cout << "Introduzca el numero: " << std::endl;
  std::cin >> numero;
  for(int i = 2; i <= numero; i++){
    suma +=(float)1/i;
  }
  std::cout << std::setprecision(4) << std::fixed << suma << std::endl;
  return;
}