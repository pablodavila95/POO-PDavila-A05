#include <iostream>
#include "FormatoHora.h"
int main(){

//Atributos de formato hora necesarios para marcar la hora.
    //Hora de Inicio.

    int h1,m1,s1,h2,m2,s2;



//Comenzamos a definir cada uno de los Metodos a usar.

    std::cout<<"Ingrese la hora de inicio de la clase (SOLO LA HORA):\n";
    std::cin>>h1;
    std::cout<<"Ingrese los minutos de la hora inicio de la clase (SOLO LOS MINUTOS):\n";
    std::cin>>m1;
    std::cout<<"Ingrese la cantidad de segundos del instante en el que inicia la clase (SOLO SEG.)\n";
    std::cin>>s1;
    //FALTA SEGUIR INGRESANDO lo de la fecha.
    std::cout<<"Ingrese la hora de termino de la clase (SOLO HORA):\n";
    std::cin>>h2;
    std::cout<<"Ingrese los minutos de la hora a los que acaba la clase: (SOLO MINUTOS):\n";
    std::cin>>m2;
    std::cout<<"Ingrese los segundos de la hora termino(SOLO SEGUNDOS): \n";
    std::cin>>s2;

    FormatoHora hora1 = *new FormatoHora(h1,m1,s1);
    FormatoHora hora2 = *new FormatoHora(h2,m2,s2);

    std::cout<<"La clase dura: \n";
    FormatoHora horaFinal = hora2 - hora1;
    horaFinal.corregirHora();


    horaFinal.to_String();



    return 0;
}