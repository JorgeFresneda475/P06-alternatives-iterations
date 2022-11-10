#include <iostream>
#include "add-one-second.h"

void AddOneSecond() {
  int horas, minutos, segundos;
  horas = horas;
  minutos = minutos;
  segundos = segundos;
  //std::cout << "Introduzca las horas, los minutos y los segundos: " << std::endl;
  std::cin >> horas;
  std::cin >> minutos;
  std::cin >> segundos;
  if(horas < 24 && minutos < 60 && segundos < 60){
    std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
  }
  if(segundos == 59){
    std::cout << horas << ":" << minutos + 1 << ":" << "00" << std::endl;
  }
  if(minutos == 59){
    std::cout << horas + 1 << ":" << "00" << ":" << "00" << std::endl;
  }
  if(horas < 10 && minutos < 10 && segundos < 10){
    std::cout << 0 << horas << ":" << 0 << minutos << ":" << 0 << segundos << std::endl;
  }
  if(horas == 0){
    std::cout << "00" << ":" << minutos << ":" << segundos << std::endl;
  }
  return;
}