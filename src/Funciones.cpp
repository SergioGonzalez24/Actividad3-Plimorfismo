#include "../include/Funciones.hpp"

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

void efecto_carga(int time, const string message, char symbol, int seleccion) {

    string progress_bar;
    const double progress_level = 1.42;

    cout << message << "\n\n";

    for (double percentage = 0; percentage <= 100; percentage += progress_level) {
        progress_bar.insert(0, 1, symbol);
        cout << "\r [" << ceil(percentage) << '%' << "] " << progress_bar;
        this_thread::sleep_for(chrono::milliseconds(time));       
    }

    
    cout << "\n\n";
    cout << "¡Envio Procesado!";
    cout << "\n\n";
}


void aEtiquetar(Paquete &paquete) {
    paquete.etiqueta();
}


void calc_Precio(Paquete &paquete) {
    paquete.calcular_Precio();
}

void enviarPaquete() {

    #define MAX_NOMBREE_LEN 60  
    #define MAX_NOMBRED_LEN 60 
    #define MAX_DIRECCION_LEN 120  
    #define MAX_NOTAS_LEN 500

    #define MAX_COLOR_LEN 20


    char valor_correcto;

    char nombreEnviador[MAX_NOMBREE_LEN];
    char nombreDestinatario[MAX_NOMBRED_LEN];
    char direccion[MAX_DIRECCION_LEN];

    char nombrePaqueteria[MAX_NOMBREE_LEN];
    char direccionPaqueteria[MAX_DIRECCION_LEN];
    char color[MAX_COLOR_LEN];

    string id;
    double peso;
    string fecha;

    char notas[MAX_NOTAS_LEN];

    double x,y,z,radio;
    int estampas;
    int paraEnviar = 0;


    do {
        cout << "Ingrese los siguietes datos: " << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "Paqueteria: ";
        cin.getline(nombrePaqueteria,MAX_NOMBREE_LEN, '$');
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "Direccion de la Paqueteria: ";
        cin.getline(direccionPaqueteria,MAX_DIRECCION_LEN, '$');
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "Color de Paqueteria: ";
        cin.getline(color,MAX_COLOR_LEN, '$');
        cout << endl;


        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "De: ";
        cin.getline(nombreEnviador,MAX_NOMBREE_LEN, '$');
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "Para: ";
        cin.getline(nombreDestinatario,MAX_NOMBRED_LEN,'$');
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout <<"Direccion: ";
        cin.getline(direccion,MAX_DIRECCION_LEN,'$');
        cout << endl;

        cout << "id del paqute: ";
        cin >> id;
        cout << endl;

        cout << "Peso del paquete en kg: ";
        cin >> peso;
        cout << endl;

        cout << "Fecha de envio (d/m/a) :";
        cin >> fecha;
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "Notas adicionales (max 50 char): ";
        cin.getline(notas,MAX_NOTAS_LEN,'$');
        cout << endl;

        Paquete paq1(nombrePaqueteria,direccionPaqueteria,color,nombreEnviador, nombreDestinatario, direccion, id, peso, fecha, notas);

        cout << "Que desea Enviar? " << endl;
        cout << "1-.Caja \n 2-.Sobre \n 3-.Cilindro" << endl;

        int sleccion;
        cin >> sleccion;

        if (sleccion == 1) {
            cout << "Caja: \n Coloque las dimensiones de su caja en largo, ancho, alto " << endl;
            cout << "Largo :";
            cin >> x;
            cout << endl;
            cout << "ancho :";
            cin >> y;
            cout << endl;
            cout << "alto :";
            cin >> z;
            cout << endl;


            Caja caja1(nombrePaqueteria,direccionPaqueteria,color,nombreEnviador, nombreDestinatario, direccion, id, peso, fecha, notas,x,y,z);

            cout << endl;
            aEtiquetar(caja1);
            cout << endl;
           paraEnviar = caja1.enviar_Paquete();

        }

        else if (sleccion == 2) {

            cout << "Sobre: \n Coloque las dimensionesde su sobre en largo, alto y la cantidad de estampas: " << endl;
            cout << "largo :";
            cin >> x;
            cout << endl;
            cout << "alto: ";
            cin >> y;
            cout << endl;
            cout << "Estampas: ";
            cin >> estampas;
            cout << endl;

            Sobre sobre1(nombrePaqueteria,direccionPaqueteria,color,nombreEnviador, nombreDestinatario, direccion, id, peso, fecha, notas,x,y,estampas);

            cout << endl;
            aEtiquetar(sobre1);
            cout << endl;
            paraEnviar = sobre1.enviar_Paquete();

        }

        else if (sleccion == 3) {
            cout << "Cilindro: \n Coloque las dimensiones del cilindor en radio y altura" << endl;
            cout << "Radio: ";
            cin >> radio;
            cout << endl;
            cout << "Altura: ",
            cin >> y;
            cout << endl;
            

            Cilindro cilindro1(nombrePaqueteria,direccionPaqueteria,color,nombreEnviador, nombreDestinatario, direccion, id, peso, fecha, notas,radio,y);

            cout << endl;
            aEtiquetar(cilindro1);
            cout << endl;    
            int paraEnviar = cilindro1.enviar_Paquete();   
        }




        cout << "Sus valores son correctos y/n? ";
        cin >> valor_correcto;
        cout << endl;

        




    }

    while (valor_correcto == 'n');

    //Efectos de Cargando

    efecto_carga(20, "Procesando", '*',paraEnviar); //Proceso
    efecto_carga(10, "Enviando", '#',paraEnviar); //Enviando Paquete
}




