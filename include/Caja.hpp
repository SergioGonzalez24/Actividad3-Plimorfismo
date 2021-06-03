/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef CAJA_H
#define CAJA_H

#include "Paquete.hpp"
#include <string>

using std::string;
	
class Caja : public Paquete  {
    private:
		double largo;
        double ancho;
        double altura;
		
	public:
		//Constructor
		Caja();
		Caja(string paqueteria, string salida, string color,
        string de,
        string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas,
		double largo, double ancho, double altura);

		//geters
		double get_largo() { return largo; }
		double get_ancho() { return ancho; }
		double get_alto() { return altura; }

		//seters

		void set_largo(double largo);
		void set_ancho(double ancho);
		void set_alto(double altura);

		//otros
		virtual void etiqueta();
		virtual int enviar_Paquete() { return 1;}
		virtual int calcular_Precio();




};
#endif