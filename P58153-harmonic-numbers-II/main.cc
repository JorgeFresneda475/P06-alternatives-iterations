#include <iostream>
#include <iomanip>

int main() {
  float numero1, numero2, suma = 1.00, suma2 = 1.00;
  //std::cout << "Introduzca el numero: " << std::endl;
  std::cin >> numero1;
  std::cin >> numero2;
  for(int i = 2; i <= numero1; i++){
    suma +=(float)1/i;
  } 
  for(int i = 2; i <= numero2; i++){
    suma2 +=(float)1/i;
  }
  float suma_total = suma + suma2;
  std::cout << std::setprecision(10) << std::fixed << suma_total << std::endl;
  return 0;
}
