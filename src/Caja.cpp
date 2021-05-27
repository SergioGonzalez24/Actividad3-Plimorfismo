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

void Caja::pedido_final() {
    cout << "Informacion de Pedido: " << endl;
    cout << "largo" << get_largo() << endl;
    cout << "ancho" << get_ancho() << endl;
    cout << "altura" << get_alto() << endl;


    

    

}