/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef CILINDRO_H
#define CILINDRO_H

#include "Paquete.hpp"
#include <string>

using std::string;
	
class Cilindro : public Paquete  {
    private:
		double radio;
        double altura;
		
	public:
		//Constructor
		Cilindro(string paqueteria, string salida, string color,
        string de,
        string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas, double radio, double altura);

		//geters
		double get_radio() { return radio; }
		double get_alto() { return altura; }

		//seters

		void set_radio(double radio);
		void set_alto(double altura);

		//otros

		void pedido_final();

};
#endif