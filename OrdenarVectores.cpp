#include <iostream>
#include <locale.h>

using namespace std;

main (){
	setlocale(LC_ALL,"Spanish");
	bool cambio = true;
	int vector[5], guardar;
	
	for (int i = 0; i < 5; i++){						//para ingresar los 5 valores
		cout << "Ingrese el valor: " << i+1 << ": \n";
		cin >> vector[i];
	}

	cout << "\nEl vector ingresado es: [";				//mostrar el vector
	for (int i=0; i < 5-1; i++){						//motrar todos los valores exepto el ultimo
		cout << vector[i] << ", ";						//separados por ", "
	}cout << vector[5-1] << "]\n";						//el ultimo valor se imprime aparte con "]" para cerrar

	while(cambio){										//Metodo burbuja para organizar datos
		cambio = false;
		for(int i = 0; i<5-1; i++){
			if(vector[i]>vector[i+1]){					//forma ascendente		
				guardar = vector[i];
				vector[i] = vector[i+1];
				vector[i+1] = guardar;
				cambio = true;
			}
		}
	}
	
	cout << "El vector ordenado de forma ascendente es: [";
	for (int i=0; i < 5-1; i++){
		cout << vector[i] << ", ";
	}cout << vector[5-1] << "]\n";
	
	cambio = true;				//para que saliera del antrior while; "cambio" quedo en falso, asi que reiniciamos la variable
	while(cambio){
		cambio = false;
		for(int i = 0; i<5-1; i++){
			if(vector[i]<vector[i+1]){
				guardar = vector[i];
				vector[i] = vector[i+1];
				vector[i+1] = guardar;
				cambio = true;
			}
		}
	}
	
	cout << "El vector ordenado de forma descendente es: [";
	for (int i=0; i < 5-1; i++){
		cout << vector[i] << ", ";
	}cout << vector[5-1] << "]\n";
}
