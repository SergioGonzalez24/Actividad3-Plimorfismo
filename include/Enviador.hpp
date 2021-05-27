/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Enviador

*/

//Clase Enviador creado por Sergio Gonzalez

#ifndef ENVIADOR_H
#define ENVIADOR_H
#include <string>

using std::string;

	
class Enviador  {
	private:
		string nombre; 


	public:
		//Constructores
		Enviador();
		Enviador(string nombre);

		//Geteres
		string get_nombre_enviador() {return nombre;}

		//Seters
		void set_nombre(string nombre);
};
#endif