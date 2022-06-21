#include <iostream>
using namespace std;

//Codigo por Marlon Daniel Joya Torres
//Primera evaluacion del curso

//Enunciado:
/*Realizar un programa en el cual sume los digitos de su codigo de estudiante y presente el resultado en
pantalla, con el siguiente mensaje: "la suma de los digitos de mi numero de código de estudiante es:*/



int main() {
  int cod_est, suma_cod=0;
  
  std::cout <<"\nIngrese su codigo de estudiante: ";
  cin>>cod_est;

  while(cod_est>0){
    suma_cod+= cod_est%10;
    cod_est=cod_est/10;
  }

  cout<<"\nLa suma de los digitos de mi numero de codigo de estudiante es : "<<suma_cod;
  
  
}