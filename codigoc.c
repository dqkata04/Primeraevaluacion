#include <stdio.h>


//Codigo por Marlon Daniel Joya Torres
//Primera evaluacion del curso

//Enunciado:
/*Realizar un programa en el cual sume los digitos de su codigo de estudiante y presente el resultado en
pantalla, con el siguiente mensaje: "la suma de los digitos de mi numero de código de estudiante es:*/


int main(void) {

  int cod_est, suma_cod=0;

  
  printf("Ingrese su codigo de estudiante: ");
  scanf("%d",&cod_est);

  
  
  while(cod_est>0){
    suma_cod+= cod_est%10;
    cod_est=cod_est/10;
  }
  
    printf("\nLa suma de los digitos de mi numero de codigo de estudiante es: %d \n", suma_cod);
  
  return 0;
}