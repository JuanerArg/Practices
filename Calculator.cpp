#include<stdio.h>

float sum(a, b){
    float result = a + b;
    return result; 
}

float main(void){
    float num1, num2;
    printf("Ingresa 2 numeros\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    //float suma = sum(num1, num2);
    printf("Que Operacion desea realizar?");
    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Division");
    printf("\n5. Resto");
    int opciones;
    scanf("%d", opciones);

    if(opciones == 1){
        float suma = sum(num1, num2);
        printf("Resultado %2.f", suma);
    }

}