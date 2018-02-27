//
// Created by Pablo on 26/02/2018.
//

#include "Persona.h"
Persona::Persona() {
    this->nombre="";
    this->fechaNac="";
    this->genero = 0;
    this->estatura=0;
    this->peso=0;
}
Persona::Persona(std::string nombre, std::string fechaNac, char gen) {
    this->nombre=nombre;
    this->fechaNac=fechaNac;
    this->genero = gen;
    this->estatura=estatura;
    this->peso=peso;
}
void Persona::setEstatura(float) {
    estatura=estatura;
}
void Persona::setPeso(float) {
    this->peso=peso;
}
std::string Persona::getNombre() {
    return this->nombre;
}
std::string Persona::getFechaNac() {
    return this->fechaNac;
}

char Persona::getGenero() {
    return this->genero;
}
float Persona::getEstatura() {
    return this->estatura;
}
float Persona::getPeso() {
    return this->peso;
}
