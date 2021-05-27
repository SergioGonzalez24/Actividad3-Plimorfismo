/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef SOBRE_H
#define SOBRE_H

#include "Paquete.hpp"
#include <string>

using std::string;
	
class Sobre : public Paquete {
    private:
		double largo;
        double ancho;
        int estampas;
		
	public:
		//Constructor
		Sobre(string paqueteria, string salida, string color,
        string de,
        string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas, 
		double largo, double ancho, int estampas);

		//geters
		double get_largo() { return largo; }
		double get_ancho() { return ancho; }
		double get_estampas() { return estampas; }

		//seters

		void set_largo(double largo);
		void set_ancho(double ancho);
		void set_estampas(double estampas);

		//otros

		void pedido_final();
};
#endif