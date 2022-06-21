#include <stdio.h>
#include <ctype.h>

//Codigo por Marlon Daniel Joya Torres
//Primera evaluacion del curso

//Enunciado:
/*Realizar un programa en el cual sume los digitos de su codigo de estudiante y presente el resultado en
pantalla, con el siguiente mensaje: "la suma de los digitos de mi numero de código de estudiante es:*/


int main(void) {

  int arreglo_cifras[10], cod_est, i=0, suma_digitos=0;

  
  printf("Ingrese su codigo de estudiante: ");
  scanf("%d",&cod_est);
  

  
  for (int n=0;n<10; n++){
    arreglo_cifras[i]=cod_est%10;
    cod_est=cod_est/10;
    i++;
  }

  if(arreglo_cifras[0]==0 && arreglo_cifras[1]==0){
    printf("\nCodigo terminado...");

  }
    
  else{
    for(int i=0;i<10; i++){
      suma_digitos+=arreglo_cifras[i];
    }
    printf("\nLa suma de los digitos de mi numero de codigo de estudiante es: %d \n", suma_digitos);
  }
  return 0;
}