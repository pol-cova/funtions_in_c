//
// Created by Paul Contreras on 11/05/23.
//
/*
 * Elabore un programa que calcule el volumen de un cilindro circular recto,
 * de un cono y de una pirámide a través de un menú.
 */

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

// Prototipos
void vol_cil();
void vol_cono();
void vol_pyramid();
void menu();
int main_app();

int main_app(){
    int user_selection, app = 1;
    menu();
    scanf("%d", &user_selection);
    switch (user_selection) {
        case 1: vol_cil();
            break;
        case 2: vol_cono();
            break;
        case 3: vol_pyramid();
            break;
        case 4: app = 0;
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
    system("pause");
    return 0;
}

void menu(){
    printf("-------------------------\n");
    printf("|           MENU         |\n");
    printf("-------------------------\n");
    printf("        Bienvenido       \n");
    printf("-------------------------\n");
    printf("| 1. Volumen de un cilindro circular |\n");
    printf("| 2. Volumen de un cono      |\n");
    printf("| 3. Volumen de un piramide |\n");
    printf("| 4. Salir                  |\n");
    printf("-------------------------\n");
}

void vol_cil(){
    float r, h, volumen;

    printf("Calculadora de número volumen de un cilindro circular!\n");
    printf("Ingrese el valor del radio del cilindro: \n");
    scanf("%f", &r);
    printf("Ingrese el valor de la altura del cilindro: \n");
    scanf("%f", &h);

    volumen = (M_PI * pow(r, 2))*h;

    printf("\nEl volumen de cilindro de radio %f y altura %f es: %f\n", r,h,volumen);
}

void vol_cono(){
    float r, h, volumen;

    printf("Calculadora de número volumen de un cono!\n");
    printf("Ingrese el valor del radio del cono: \n");
    scanf("%f", &r);
    printf("Ingrese el valor de la altura del cono: \n");
    scanf("%f", &h);

    volumen = ((M_PI * pow(r, 2))*h)/3;

    printf("\nEl volumen de cono de radio %f y altura %f es: %f\n", r,h,volumen);
}

void vol_pyramid(){
    float lado, h, volumen;

    printf("Calculadora de número volumen de un piramide !\n");
    printf("Ingrese el valor de lado de la base de la piramide: \n");
    scanf("%f", &lado);
    printf("Ingrese el valor de la altura de la piramide: \n");
    scanf("%f", &h);

    volumen = ((lado*lado)*h)/3;

    printf("\nEl volumen de la piramide de lado %f y altura %f es: %f\n", lado,h,volumen);
}