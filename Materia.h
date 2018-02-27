//
// Created by Pablo on 26/02/2018.
//

#ifndef POO_PDAVILA_A06_MATERIA_H
#define POO_PDAVILA_A06_MATERIA_H


#include <iostream>
#include "Profesor.h"
#include "Horario.h"

class Materia {
//Atributos
private:
    std::string Nombre;
    std::string Clave;
    Horario*horario;
    Profesor*Maestro;

//Metodos
public:
    Materia(std::string nombre,std::string clave );
    Materia(std::string nombre,std::string clave,Horario*horario,Profesor*maestro);
    void setHorario(Horario*horario);
    void setMaestro(Profesor*profesor);
    std::string getNombre();
    std::string getClave();
    Horario*getHorario();
    Profesor*getMaestro();
    std::string toString();
};


#endif //POO_PDAVILA_A06_MATERIA_H
