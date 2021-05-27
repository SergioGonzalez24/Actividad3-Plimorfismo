#include <iostream>
#include "../include/Cilindro.hpp"  
#include <string>
	
using namespace std;

Cilindro::Cilindro(string paqueteria, string salida, string color,
        string de,
        string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas,
        double radio, double altura){
            
    this-> radio = radio;
    this-> altura = altura;
}

void Cilindro::set_radio(double radio) {
    this-> radio = radio;
}

void Cilindro::set_alto(double altura) {
    this-> altura = altura;
}

void Cilindro::pedido_final() {
    cout << "Informacion de Pedido: " << endl;
    cout << "radio" << get_radio() << endl;
    cout << "altura" << get_alto() << endl;


    

    

}