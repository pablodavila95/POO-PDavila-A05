//
// Created by Pablo on 26/02/2018.
//

#include "Profesor.h"
Profesor::Profesor() {
    this->nomina="";
    this->fechaNac="";
    this->genero=0;
    this->nombre="";
}
Profesor::Profesor(std::string n, std::string fNac, char gen, std::string nomina) {
    this->nomina=nomina;
    this->fechaNac=fNac;
    this->genero=gen;
    this->nombre=n;
    std::cout<<this->toString()<<"\n";

}
void Profesor::setHorario(Horario*horario) {
    this->getHorario();
}
Horario*Profesor::getHorario() {
    return getHorario();
}
std::string Profesor::getNomina() {
    return this->nomina;
}
std::string Profesor::toString() {
    std::string profeString ="";
    profeString= "Nombre: "+ nombre + ", Fecha de Nacimiento: "+fechaNac + ", Genero: "+genero+ ", Nomina:"+nomina;
    return profeString;
}
