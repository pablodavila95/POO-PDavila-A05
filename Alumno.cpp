//
// Created by Pablo on 26/02/2018.
//

#include "Alumno.h"
Alumno::Alumno() {
    this->nombre="";
    this->fechaNac="";
    this->genero = 0;
    this->estatura=0;
    this->peso=0;
    this->gene="";
    this->matricula="";

}
Alumno::Alumno(std::string n, std::string fNac, char gen, std::string matricula, std::string generacion) {
    this->nombre=n;
    this->fechaNac=fNac;
    this->genero=gen;
    this->matricula=matricula;
    this->gene=generacion;
    std::cout<<this->toString()<<"\n";
}

void Alumno::setHorario(Horario*horario) {

}
Horario*Alumno::getHorario() {
    return getHorario();
}
std::string Alumno::getGene() {
    return gene;
}

std::string Alumno::getMatricula(){
    return matricula;
}
void Alumno::setMaterias(Materia *m[6]) {
    this->materias[6] = m[6];
}
Materia*Alumno::getMateria() {
    return materias[6];
}
std::string Alumno::toString() {
    std::string stringAl;
    stringAl = "Nombre: " + getNombre()+ ", Fecha de Nac: "+getFechaNac() +", Genero: "+ getGenero() +", Matricula:" +getMatricula() + "Generacion"+ getGene();
    return stringAl;
}

