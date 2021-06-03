#include <iostream>
#include "../include/Sobre.hpp"  
#include <string>
	
using namespace std;

Sobre::Sobre() {
    	largo = 10;
        ancho = 15;
        estampas = 1;
}

Sobre::Sobre(string paqueteria, string salida, string color,
        string de,
        string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas, 
        double largo, double ancho, int estampas) {
            
    this-> largo = largo;
    this-> ancho = ancho;
    this-> estampas = estampas;
}

void Sobre::set_largo(double largo) {
    this-> largo = largo;
}

void Sobre::set_ancho(double ancho) {
    this-> ancho = ancho;
}

void Sobre::set_estampas(double estampas) {
    this-> estampas = estampas;
}

void Sobre::etiqueta() {
    Paquete::etiqueta();
    cout << "Informacion de Pedido: " << endl;
    cout << "largo" << get_largo() << endl;
    cout << "ancho" << get_ancho() << endl;
    cout << "estampas" << get_estampas() << endl;
}

int Sobre::calcular_Precio() {
    int Precio_Sobre = 10;
    return Precio_Sobre;

}