//
// Created by Pablo on 26/02/2018.
//

#include "FormatoHora.h"
FormatoHora::FormatoHora(int h, int m, int s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
    std::cout<<this->to_String()<<"\n";
}
bool FormatoHora::validaHrs(int) {
    bool horaCorrecta = true;
    if(horas>=0 && horas<=23){
        bool horacorrecta=true;
    }else if (horas<0 || horas>23){
        bool horacorrecta=false;
    }
}

bool FormatoHora::validaMS(int) {
    bool minutosYSegValidos = true;

    if(minutos>=0 && minutos<=59 && segundos>=0 && segundos <=59){
        bool minutosYSegvalidos= true;
    }else if (minutos<=0 || minutos>59 || segundos<=0 ||segundos>59 ){
        bool minutosYSegValidos=false;
    }
}
int FormatoHora::getHoras() {
    return horas;
}
int FormatoHora::getMinutos() {
    return minutos;
}
int FormatoHora::getSegundos() {
    return segundos;
}
std::string FormatoHora::to_String() {
    std::string muestraHora, muestraMinutos, muestraSegundos;
    muestraHora= (std::to_string(getHoras()));
    muestraMinutos= (std::to_string(getMinutos()));
    muestraSegundos= (std::to_string(getSegundos()));
    return muestraHora+ "/"+muestraMinutos+"/"+muestraSegundos;
}

FormatoHora operator+(const FormatoHora &hi, const FormatoHora &hf) {
    FormatoHora resultado (hi.horas+hf.horas, hi.minutos+hf.minutos, hi.segundos+hf.segundos);
    return resultado;
}

FormatoHora operator-(const FormatoHora &hi, const FormatoHora &hf) {
    int ht, mt, st;
    ht = hi.horas-hf.horas;
    mt = hi.minutos-hf.minutos;
    st = hi.segundos-hf.segundos;

    FormatoHora resultado = *new FormatoHora(ht,mt,st);
    return resultado;
}

FormatoHora FormatoHora::corregirHora() {
    int v1, v2, v3;
    v1 = getHoras();
    v2 = getMinutos();
    v3 = getSegundos();

    if (v3>60) {
        v2 = v2+1;
        setMinutos(v2);
    }
    if (v2>60) {
        v1 = v1+1;
        setHoras(v1);
    }

}

void FormatoHora::setHoras(int horas) {
    FormatoHora::horas = horas;
}

void FormatoHora::setMinutos(int minutos) {
    FormatoHora::minutos = minutos;
}

void FormatoHora::setSegundos(int segundos) {
    FormatoHora::segundos = segundos;
}


