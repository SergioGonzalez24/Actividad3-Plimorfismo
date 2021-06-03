#include <iostream>
#include "../include/Caja.hpp"
#include <string>

using namespace std;

Caja::Caja(string paqueteria, string salida, string color,
        string de,
        string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas,
		double largo, double ancho, double altura) {

    this-> largo = largo;
    this-> ancho = ancho;
    this-> altura = altura;
}

void Caja::set_largo(double largo) {
    this-> largo = largo;
}

void Caja::set_ancho(double ancho) {
    this-> ancho = ancho;
}

void Caja::set_alto(double altura) {
    this-> altura = altura;
}

void Caja::etiqueta() {
    Paquete::etiqueta();
    cout << "Informacion de Pedido: " << endl;
    cout << "largo" << get_largo() << endl;
    cout << "ancho" << get_ancho() << endl;
    cout << "altura" << get_alto() << endl;

}

int Caja::calcular_Precio() {
    int Precio_Caja = 100;
    
    if (get_peso() <= 50 && get_peso() > 20) {
        return 100 + Precio_Caja;
    }

    else if (get_peso() <= 20 && get_peso() > 10){
        return 50 + Precio_Caja;
    }

    else if (get_peso() <= 10 && get_peso() > 0){
        return 25 + Precio_Caja;
    }
    return 0;
}