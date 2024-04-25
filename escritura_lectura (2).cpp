#include <iostream>
#include <fstream>			//nos da acceso a lectura y escritura de archivos
#include <stdlib.h>			//Pa usar el exit(1)
using namespace std;

void crear();
void lectura();
void escribir(string);

string dir = "Prueba de lectura.txt";

main(){
	string texto;
	char respuesta = 'n';
	
	cout << "Desea crear o sobreescribir un nuevo archivo?: (s = si, n = no)\n";
	cin >> respuesta;
	if (respuesta == 's'){
		crear();
	}
	
	cout << "escribe el contenido: \n";
	do{
		escribir(texto);
		getline(cin, texto);
		texto += "\n";
	} while(texto != "exit\n");
	
	cout << "\nlectura del archivo:\n";
	lectura();
}

void escribir(string texto){
	ofstream archivo;
	archivo.open(dir, ios::app);
	
	if (archivo.fail()){
		cout << "No se pudo escribir" << endl;
		exit(1);
	}
	archivo << texto;
	
	archivo.close();
}

void crear(){
	ofstream archivo;
	archivo.open(dir, ios::out);
	
	if (archivo.fail()){
		cout << "No se pudo crear" << endl;
		exit(1);
	} else {
		cout << "archivo creado con exito\n\n";
	}
	archivo.close();
}

void lectura(){
	string linea_texto;
	ifstream archivo;								//"objeto de la libreria fstream"
	archivo.open(dir, ios::in);				//direccion y nombre (si no hay)ios::in = permisos de lectura
	if (archivo.fail()){
		cout << "No se pudo leer" << endl;
		exit(1);
	}
	while(!archivo.eof()){							//mientras hayan caracteres
		getline(archivo, linea_texto);
		cout << linea_texto << endl;			//imprimir
	}
	archivo.close();
}
