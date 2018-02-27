#include <iostream>
#include "FormatoHora.h"
int main(){

    int h1,m1,s1,h2,m2,s2;




    std::cout<<"Hora de inicio: (Hora minutos segundos) \n";
    std::cin>>h1;
    std::cin>>m1;
    std::cin>>s1;

    std::cout<<"Hora de final: (Hora minutos segundos)\n";
    std::cin>>h2;
    while (h2<h1) {
        std::cout<<"La hora final no puede ser mas chica \n";
        std::cin>>h2;
    }
    std::cin>>m2;
    std::cin>>s2;

    FormatoHora hora1 = *new FormatoHora(h1,m1,s1);
    FormatoHora hora2 = *new FormatoHora(h2,m2,s2);

    std::cout<<"La clase dura: \n";
    FormatoHora horaFinal = hora2 - hora1;
    horaFinal.corregirHora();


    horaFinal.to_String();



    return 0;
}