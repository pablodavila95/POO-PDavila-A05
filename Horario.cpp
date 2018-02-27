//
// Created by Pablo on 26/02/2018.
//

#include "Horario.h"
//Constructor por default.
Horario::Horario() {
    this->inicio= nullptr;
    this->fin= nullptr;
    this->aula="";
}
Horario::Horario(std::string aula) {
    this->aula=aula;
    std::cout<<this->getAula()<<"\n";
}
//Constructor que considera inicio, fin y aula en la que se imparte la clase.
Horario::Horario(FormatoHora*inicio, FormatoHora*fin, std::string aula) {
    this->inicio=inicio;
    this->fin=fin;
    this->aula=aula;

}
//Constructor que considera hora, minuto y segundo, además de Inicio, Fin y aula donde se imparte la clase.
Horario::Horario(int h, int m, int s, FormatoHora*inicio, FormatoHora*fin, std::string aula){
    this->inicio=inicio;
    this->fin=fin;
    this->aula=aula;

}
void Horario::setAula(std::string aula) {
    this->aula=aula;
}
FormatoHora*Horario::getInicio() {
    return this->inicio;
}
FormatoHora*Horario::getFin() {
    return this->fin;
}
std::string Horario::getAula() {
    return this->aula;
}
FormatoHora*Horario::CalculaDuracion() {
    int horain =inicio->getHoras();
    int minin = inicio->getMinutos();
    int segunin =inicio->getSegundos();

    int horafin = fin->getHoras();
    int minfin = fin->getMinutos();
    int segfin = fin->getSegundos();

    if(minfin<minin){
        horafin= horafin-1;
        minfin= minfin+60;
    }
    if(segunin<segfin){
        minfin=minfin-1;
        segfin= segfin+60;
    }
    return new FormatoHora(horafin-horain,minfin-minin,segfin-segunin);

}
std::string Horario::toString() {
    std::string horaInicial;
    std::string horaFinal;
    horaInicial = getInicio()->to_String();
    horaFinal= getFin()->to_String();
    return "De: " + horaInicial + "a " + horaFinal;
}