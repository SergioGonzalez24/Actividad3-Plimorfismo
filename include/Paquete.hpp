/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Paquete

*/

//Clase Paquete creado por Sergio Gonzalez

#ifndef PAQUETE_H
#define PAQUETE_H
#include "Enviador.hpp"
#include "Destinatario.hpp"
#include "Paqueteria.hpp"

#include <string>

using std::string;


class Paquete  {
	private:

		Paqueteria datos_paqueteria; //Funciona como identificador de Paqueteria

		Enviador nombre_enviador;
		Destinatario datos_destinatario;

		string id_paquete;
		double peso;
		string fecha_envio;
		string notas;



	public:
		//Constructores
		Paquete();
		Paquete(string paqueteria, string salida, string color,
		string de,
		string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas);

		//Geters

		Paqueteria get_datos_paqueteria() {return datos_paqueteria;}



		Enviador get_nombre_enviador() {return nombre_enviador;}
		Destinatario get_datos_destinatario() {return datos_destinatario;}

		string get_id() {return id_paquete;}
		double get_peso() {return peso;}
		string get_fecha_envio() {return fecha_envio;}
		string get_notas() {return notas;}



		//Seters
		void set_datos_paqueteria(string paqueteria,string salida,string color);

		void set_nombre_enviador(string de);
		void set_datos_destinatario(string para, string direccion);

		void set_id(string id_paquete);
		void set_peso(double peso);
		void set_fecha_envio(string fecha_envio);
		void set_notas(string notas);

		

		//Otros
		void print();

};
#endif