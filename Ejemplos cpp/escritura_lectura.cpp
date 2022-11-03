#include <iostream>
#include <fstream>			//nos da acceso a lectura y escritura de archivos
#include <stdlib.h>			//Pa usar el exit(1)
using namespace std;

void crear();
void lectura();
void escribir(string texto);

main(){
	string texto;
	
	crear();
	
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
	archivo.open("test_escritura.txt", ios::app);
	
	if (archivo.fail()){
		cout << "No se pudo escribir" << endl;
		exit(1);
	}
	archivo << texto;
	
	archivo.close();
}

void crear(){
	ofstream archivo;
	archivo.open("test_escritura.txt", ios::out);
	
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
	archivo.open("test_escritura.txt", ios::in);				//direccion y nombre (si no hay)ios::in = permisos de lectura
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
