#include <iostream>
#include <string>
#include "../include/Enviador.hpp"  

using std::string;

//Constructor
Enviador::Enviador() {
    nombre = "John Smith";
}
Enviador::Enviador(string nombre) {
    this-> nombre = nombre;
}

//Seters

void Enviador::set_nombre(string nombre) {
    this-> nombre = nombre;
}
