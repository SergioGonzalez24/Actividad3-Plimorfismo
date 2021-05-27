#include <iostream>
#include "../include/Destinatario.hpp"  
#include <string>
	
using std::string;

Destinatario::Destinatario() {
    nombre = "John Smith";
    direccion = "";
}

Destinatario::Destinatario(string nombre, string direccion) {
    this-> nombre = nombre;
    this-> direccion = direccion;

}

void Destinatario::set_nombre(string nombre) {
    this-> nombre = nombre;
}

void Destinatario::set_direccion(string direccion) {
    this-> direccion = direccion;
}
	
