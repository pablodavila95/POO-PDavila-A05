//
// Created by Pablo on 26/02/2018.
//

#ifndef POO_PDAVILA_A06_PERSONA_H
#define POO_PDAVILA_A06_PERSONA_H



#include <iostream>

class Persona {
//Atributos
protected:
    std::string nombre;
    std::string fechaNac;
    char genero;
    float estatura;
    float peso;

//Metodos
public:
    Persona();
    Persona(std::string nombre,std::string fechaNac, char gen);
    void setEstatura(float);
    void setPeso(float);
    std::string getNombre();
    std::string getFechaNac();
    char getGenero();
    float getEstatura();
    float getPeso();
    virtual std::string toString()=0;
};

#endif //POO_PDAVILA_A06_PERSONA_H
