/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef PAQUETERIA_H
#define PAQUETERIA_H

#include <string>

using std::string;
	
class Paqueteria  {
    private:
		//Objetos
		string nombre_paqueteria;
		string direccion;
		string color;
		
	public:
		//Constructor
		Paqueteria();
		Paqueteria(string nombre_paqueteria, string direccion, string color);

		//Geters
		string get_nombreP() { return nombre_paqueteria;}
		string get_direccionP() {return direccion;}
		string get_colorP() {return color;}

		//Seters
		void set_nombreP(string nombre_paqueteria);
		void set_direccionP(string direccion);
		void set_colorP(string color);

};
#endif