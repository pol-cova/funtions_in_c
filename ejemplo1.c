//
// Created by Paul Contreras on 11/05/23.
//
#include <stdio.h>
#include <stdlib.h>

void saludo() {
    printf("\n Les expreso mi agrado al comenzar este curso,  ");
    printf("y les deseo un exitoso curso. Esta materia le permitir%c aprender a programar\n\n",160);
}

void comunicado() {
    printf("\n\n Por favor lean las indicaciones respecto a la evaluaci%cn del curso\n\n ",162);
    printf("Escriba sus opiniones en el Foro, por favor \n\n");
    return;
}

void despedida() {
    printf("Agradezco la atenci%c dada. Chao ",162);
    return;
}



int main() {


    printf("Comunicado de la maestra de Programación de Computadoras\n\n");


    saludo();

    comunicado();

    despedida();

    system("pause");

    return 0;
}