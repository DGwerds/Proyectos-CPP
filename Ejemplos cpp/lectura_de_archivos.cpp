#include <iostream>
#include <fstream>			//nos da acceso a lectura y escritura de archivos
#include <stdlib.h>			//Pa usar el exit(1)
using namespace std;

void lectura();

main(){
	lectura();
}

void lectura(){
	string linea_texto;
	ifstream file;								//"tipo de dato"
	file.open("test.txt", ios::in);				//direccion y nombre (si no hay)ios::in = permisos de lectura
	if (file.fail()){
		cout << "No se pudo abrir" << endl;
		exit(1);
	}
	while(!file.eof()){
		getline(file, linea_texto);
		cout << linea_texto << endl;
	}
	file.close();
}
