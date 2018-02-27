//
// Created by Pablo on 26/02/2018.
//

#ifndef POO_PDAVILA_A06_ALUMNO_H
#define POO_PDAVILA_A06_ALUMNO_H


#include "Persona.h"
#include "Horario.h"
#include "Materia.h"
#include <iostream>
class Alumno: virtual public Persona {
    //Atributos
private:
    std::string matricula;
    std::string gene;
    Materia*materias[6];

    //Metodos
public:
    Alumno();
    Alumno(std::string n, std::string fNac,char gen,std::string matricula,std::string generacion);
    void setHorario(Horario*horario);
    void setMaterias(Materia*m[6]);
    Horario*getHorario();
    Materia*getMateria();
    std::string getMatricula();
    std::string getGene();
    std::string toString();

};



#endif //POO_PDAVILA_A06_ALUMNO_H
