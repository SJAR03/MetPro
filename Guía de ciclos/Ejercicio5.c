#include <stdio.h>

int main5() {
    int num_estudiantes, num_notas;
    float nota, promedio, max_promedio = 0.0;
    
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &num_estudiantes);
    
    for (int i = 1; i <= num_estudiantes; i++) {
        printf("\nEstudiante %d:\n", i);
        
        printf("Ingrese la cantidad de notas: ");
        scanf("%d", &num_notas);
        
        float sum_notas = 0.0;
        
        for (int j = 1; j <= num_notas; j++) {
            printf("Ingrese la nota %d: ", j);
            scanf("%f", &nota);
            sum_notas += nota;
        }
        
        promedio = sum_notas / num_notas;
        printf("El promedio del estudiante %d es: %.2f\n", i, promedio);
        
        if (promedio > max_promedio) {
            max_promedio = promedio;
        }
    }
    
    printf("\nEl promedio mas alto es: %.2f\n", max_promedio);
    
    return 0;
}