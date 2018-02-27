//
// Created by Pablo on 26/02/2018.
//

#include "Materia.h"
Materia::Materia(std::string nombre, std::string clave) {
    this->Nombre ="";
    this->Clave="";
    this->horario= nullptr;
    this->Maestro= nullptr;
}
Materia::Materia(std::string nombre, std::string clave, Horario*horario, Profesor*maestro) {
    this->Nombre=nombre;
    this->Clave=clave;
    this->horario=horario;
    this->Maestro=maestro;
}
void Materia::setHorario(Horario*horario) {
    this->horario=horario;
}
void Materia::setMaestro(Profesor*profesor) {
    this->Maestro=profesor;
}
std::string Materia::getNombre() {
    return this->Nombre;
}
std::string Materia::getClave() {
    return this->Clave;
}
Horario*Materia::getHorario() {
    return this->horario;
}
Profesor*Materia::getMaestro() {
    return this->Maestro;
}

/*std::string Horario::getAula() {
    return this->aula;
}*/
std::string Materia::toString() {
    std::string tHorario="";
    std::string tMaestro="";
    std::string tInicio="";
    std::string tFin="";
    std::string tAula="";
    tHorario =horario->toString();
    tMaestro= getMaestro()->toString();
    return "Nombre: " + getNombre() + ", Clave:" + getClave() + tHorario + "aula: " + ", Maestro:"+ getMaestro()->toString();

}