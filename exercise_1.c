//
// Created by Paul Contreras on 11/05/23.
//
/*
 * Calcular el factorial de un número entero.
 */

#include <stdio.h>
#include <math.h>
#include <locale.h>

// Prototipos
void menu();
void n_factorial();
void n_pow();
int main_app();

int main_app(){
    int user_selection, app = 1;
    menu();
    scanf("%d", &user_selection);
    switch (user_selection) {
        case 1: n_factorial();
            break;
        case 2: n_pow();
            break;
        case 3: app = 0;
            break;
    }
    return app;
}

int main(){

    setlocale(LC_CTYPE, "SPANISH");

    int APP;
    APP = main_app();

    while (APP == 1){
        APP = main_app();
    }

}

void menu(){
    printf("-------------------------\n");
    printf("|           MENU         |\n");
    printf("-------------------------\n");
    printf("        Bienvenido       \n");
    printf("-------------------------\n");
    printf("| 1. Factorial de un entero |\n");
    printf("| 2. Potencia de un entero  |\n");
    printf("| 3. Salir                  |\n");
    printf("-------------------------\n");
}

void n_factorial(){
    int n_fact = 1, user_num;

    printf("Calculadora de número factorial n!\n");
    printf("Ingrese un número para calcular su factorial \n");
    scanf("%d", &user_num);

    if (user_num < 0){
        printf("Math error los números factoriales no existen para los negativos!\n");
    }else{
        for (int i=1; i<= user_num; i++){
            n_fact *= i;
        }
    }

    printf("\nEl factorial de %d! es: %d\n", user_num, n_fact);
}
void n_pow(){
    float user_base_num, result;
    int user_pow_num;
    printf("Calculadora de potencia de número n!\n");
    printf("Ingrese un la base del número:  \n");
    scanf("%f", &user_base_num);
    printf("Ingrese la potencia entera del número: \n");
    scanf("%d", &user_pow_num);

    result = pow(user_base_num, user_pow_num);
    printf("\nEl número %f elevado a la potencia %d es: %f\n", user_base_num, user_pow_num, result);
}








