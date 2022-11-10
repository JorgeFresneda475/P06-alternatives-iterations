#include <iostream>
#include <vector>

int main(){
  std::string numeros;
  int par;
  std::cout << "Inserte la cadena de numeros: " << std::endl;
  getline(std::cin, numeros);
  for(int i = 0; i <= numeros.size(); i++){
    par = numeros[i] / 2;
    if(par == 0){
      std::cout << par << std::endl;
    }
  }
return 0; 
}
