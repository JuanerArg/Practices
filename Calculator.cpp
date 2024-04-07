#include<stdio.h>

float sum(float a, float b){
    float result = a + b;
    return result; 
}

float deduct(float a, float b){
    float result = a - b;
    return result; 
}

float product(float a, float b){
    float result = a * b;
    return result;
}

float fraction(float a, float b){
    float result = a / b;
    return result;
}


float rest(float a, float b){
    float result = (int)a % (int)b;
    return result;
}

int main(void){
    float num1, num2;
    int opciones, salir;

    do{
    printf("Ingresa 2 numeros\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("Que Operacion desea realizar?");
    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Division");
    printf("\n5. Resto\n");
    scanf("%d", &opciones);

    switch(opciones){
        case 1:{
            float suma = sum(num1, num2);
            printf("\nResultado: %2.f", suma);
            
            break;
        }
        case 2:{
            float resta = deduct(num1, num2);
            printf("\nResultado: %2.f", resta);
            
            break;
        }
        case 3:{
            float producto = product(num1, num2);
            printf("\nResultado: %2.f", producto);

            break;
        }
        case 4:{
            if (num2 == 0){
                printf("\neRrOr x(");
                break;
            }
            float fraccion = fraction(num1, num2);
            printf("\nResultado: %2.f", fraccion);
            
            break;
        }
        case 5:{
            float resto = rest(num1, num2);
            printf("\nResto: %2.f", resto);

            break;
        }
        default: {
            printf("\neRrOr x(");
            break;
        }
        }
        printf("\nIngrese 1 para salir, 2 para hacer otra cuenta\n");
        scanf("%d", &salir);
    }while(salir != 1);
    printf("\nSaliendo...");
    printf("\nGoodbye :p");
}