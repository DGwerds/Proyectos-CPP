#include <iostream>
#include <cctype>			//para solucionar el si != SI
#include <stdlib.h>			//solo por no poner un else XD
#include <string>			//una MouseHerramienta que nos ayudara mas tarde
using namespace std;

bool case_sensitivity(){			//c++ es case-sensitive significa que distingue ente mayusculas y minusculas (HOLA != hola)
	string s;						
	cin >> s;
	cin.ignore();					//el getline() se jode sin esto ya que la linea es "cin >> s" por lo tanto debemos pasar a la siguiente
	bool salida;
	for (int i = 0; i<s.length(); i++){		//va a recorrer la variable "s" caracter por caracter
		s[i] = toupper(s[i]);				//cada caracter es convertido es su formato de mayusculas (si = SI) (libreria <cctype>)
	}
	if (s == "SI"){							//"SI" da true (1)
		salida = true;
	}else {
		salida = false;						//"NO" da false (0)
  }
  return salida;							//nos retorna un booliano
}

main(){
	string rta;				 									//rta = respuesta
	cout << "Es usted estudiante de la UIS?: \n";
	if (not case_sensitivity()){								//en el caso de que de true se niega (un truquito de programacion)
		cout << "El programa es solo para estudiantes UIS";
		exit(1);												//esto es para saltarme el else (libreria <stdlib.h>)
	}
	cout << "Usted es amigo de los animales?: \n";
	if (case_sensitivity()){
		cout << "Cual es su animal favorito?: \n";
		getline(cin, rta);										//esto es porque el "cin" no toma espacios, por lo cual (El conejo = El)
		cout << "Si le gustan los animales y su animal favorito es: " << rta;
	} else{
		cout << "Por que no le gustan los animales?: \n";
		getline(cin, rta);										//funcion de la libreria <string>
		cout << "No le gustan los animales porque: " << rta;
	}
}
