#include <iostream>
#include <string>
#include "../include/Paqueteria.hpp"
	
using std::string;

Paqueteria::Paqueteria() {}

Paqueteria::Paqueteria(string nombre_paqueteria, string direccion, string color) {
    this-> nombre_paqueteria = nombre_paqueteria;
    this-> direccion = direccion;
    this-> color = color;
}

void Paqueteria::set_nombreP(string nombre_paqueteria) {
    this-> nombre_paqueteria = nombre_paqueteria;
}

void Paqueteria::set_direccionP(string direccion) {
    this-> direccion = direccion;
}

void Paqueteria::set_colorP(string color) {
    this-> color = color;
}