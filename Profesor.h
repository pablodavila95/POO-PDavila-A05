//
// Created by Pablo on 26/02/2018.
//

#ifndef POO_PDAVILA_A06_PROFESOR_H
#define POO_PDAVILA_A06_PROFESOR_H

#include "Persona.h"
#include "Horario.h"
#include <iostream>

class Profesor: virtual public Persona {
//Atributos
private:
    std::string nomina;
//Metodos
public:
    Profesor();
    Profesor(std::string n,std::string fNac,char gen,std::string nomina );
    void setHorario(Horario*horario);
    Horario*getHorario();
    std::string getNomina();
    std::string toString();


};

#endif //POO_PDAVILA_A06_PROFESOR_H
