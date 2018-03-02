#include <iostream>
#include <cmath>
#include "FormatoHora.h"
int main(){

    int h1,m1,s1,h2,m2,s2;
    int opcion;

    std::cout<<"¿Quieres restar(0) o sumar(1) las horas? \n";
    std::cin >> opcion;

    while(opcion > 1 || opcion < 0) {
        std::cout<<"Opcion incorrecta \n";
        std::cin >> opcion;
    }

    if (opcion == 0) {
        std::cout<<"Hora de inicio: (Hora minutos segundos) \n";

        while(1) {
            std::cin >> h1;
            if (h1 >= 0 && h1 < 24)
                break;
            std::cout << "Error en la entrada de horas (Rango de 0 a 23) \n";
        }
        while(1) {
            std::cin >> m1;
            if (m1 >= 0 && m1 < 60)
                break;
            std::cout << "Error en la entrada de minutos (Rango de 0 a 60) \n";
        }
        while(1) {
            std::cin >> s1;
            if (s1 >= 0 && s1 < 60)
                break;
            std::cout << "Error en la entrada de segundos (Rango de 0 a 60) \n";
        }

        std::cout<<"Hora de final: (Hora minutos segundos)\n";
        while(1) {
            std::cin >> h2;
            if (h2 >= 0 && h2 < 24) {
                while (h2<h1) {
                    std::cout<<"La hora final no puede ser mas chica \n";
                    std::cin>>h2;
                }
                break;
            }

            std::cout << "Error en la entrada de horas (Rango de 0 a 23) \n";
        }
        while(1) {
            std::cin >> m2;
            if (m2 >= 0 && m2 < 60) {
                if (h1==h2) {
                    while (m1>m2) {
                        std::cout << "Los minutos finales no pueden ser menores \n";
                        std::cin >> m2;
                    }
                }
                break;
            }

            std::cout << "Error en la entrada de minutos (Rango de 0 a 60) \n";
        }
        while(1) {
            std::cin >> s2;
            if (s2 >= 0 && s2 < 60) {
                if (m1==m2) {
                    while (s1>s2) {
                        std::cout << "Los segundos finales no pueden ser menores \n";
                        std::cin >> s2;
                    }
                }
                break;
            }

            std::cout << "Error en la entrada de segundos (Rango de 0 a 60) \n";
        }

        FormatoHora hora1(h1,m1,s1);
        FormatoHora hora2(h2,m2,s2);

        std::cout<<"La clase dura: \n";

        //operadores sobrecargados
        FormatoHora horaFinalResta = hora2 - hora1;

        horaFinalResta.to_String();
    }

    if (opcion == 1) {
        std::cout<<"Hora de inicio: (Hora minutos segundos) \n";
        std::cin >> h1;
        std::cin >> m1;
        std::cin >> s1;

        std::cout<<"Hora de final: (Hora minutos segundos)\n";
        std::cin >> h2;
        std::cin >> m2;
        std::cin >> s2;

        FormatoHora horaS1(h1,m1,s1);
        FormatoHora horaS2(h2,m2,s2);

        std::cout<<"La clase dura: \n";
        FormatoHora horaFinalSuma = horaS1 + horaS2;
        std::string nombre =horaFinalSuma.to_String();
        std::cout << nombre;

    }
    return 0;
}