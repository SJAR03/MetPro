#include <stdio.h>

int main() {
  int llamadas_semana, evaluacion;
  float salario_bruto, salario_neto, incentivo, bono;
  
  printf("Ingrese el salario bruto: ");
  scanf("%f", &salario_bruto);
  
  printf("Ingrese el numero de llamadas atendidas a la semana: ");
  scanf("%d", &llamadas_semana);
  
  printf("Ingrese la evaluacion de la atencion (1-10): ");
  scanf("%d", &evaluacion);
  
  // calcular el incentivo según la tabla1
  if (llamadas_semana > 50 && llamadas_semana < 100) {
    incentivo = 1000;
  } else if (llamadas_semana >= 100 && llamadas_semana < 150) {
    incentivo = 1500;
  } else if (llamadas_semana >= 150) {
    incentivo = 2000;
  } else {
    incentivo = 0;
  }
  
  // calcular el bono según la tabla2
  if (evaluacion >= 1 && evaluacion <= 5) {
    bono = 0;
  } else if (evaluacion >= 6 && evaluacion <= 8) {
    bono = salario_bruto * 0.05;
  } else if (evaluacion >= 9 && evaluacion <= 10) {
    bono = salario_bruto * 0.1;
  } else {
    bono = 0;
  }
  
  salario_neto = salario_bruto + incentivo + bono; /*- (salario_bruto * 0.0625);*/
  
  // imprimir los resultados
  printf("\nSalario bruto: C$%.2f\n", salario_bruto);
  
  printf("Incentivo: C$%.2f\n", incentivo);
  
  printf("Evaluacion recibida: %d\n", evaluacion);
  
  printf("Bono: C$%.2f\n", bono);
  
  printf("\nSalario neto: C$%.2f\n", salario_neto);
  
  return 0;
}
