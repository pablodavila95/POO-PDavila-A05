    //
// Created by Pablo on 26/02/2018.
//

#ifndef POO_PDAVILA_A06_HORARIO_H
#define POO_PDAVILA_A06_HORARIO_H


#include "FormatoHora.h"
#include <iostream>

    class Horario {
//Atributos
    private:
        FormatoHora*inicio;
        FormatoHora*fin;
        std::string aula;
//Metodos
    public:
        Horario();
        Horario(FormatoHora*inicio,FormatoHora*fin,std::string aula);
        Horario(int h, int m, int s, FormatoHora*inicio, FormatoHora*fin, std::string aula);
        Horario(std::string aula);
        FormatoHora*CalculaDuracion();
        void setAula(std::string aula);
        FormatoHora*getInicio();
        FormatoHora*getFin();
        std::string getAula();
        std::string toString();

    };




#endif //POO_PDAVILA_A06_HORARIO_H
