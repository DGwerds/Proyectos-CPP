#include <iostream>
using namespace std;

int BuscarPalabra(string text, string busc){
	string texto = " ";						//por la manera en la que compruebo una palabra...
	texto += text;
	texto.append(" "); 						//...estos espacios son necesarios
	
	string buscar = " ";
	buscar += busc;
	buscar += " ";
	
	int similitud = 0, salida = 0;
	
	for (int i = 0; i < texto.length(); i++){		//para cada letra del texto
		if (texto[i] == buscar[0]){		//si la letra coinside con la primera letra de la palabra en busqueda. 
			for (int index = 0; index < buscar.length(); index++){	//comprueba las demas letras delante de ella
				if (buscar[index] == texto[i+index]){
					similitud++;					//en el caso de que coinsidan, la similitud aumenta
				}
			}
			if (similitud == buscar.length()){		//si las similitudes concuerda con el tamaño de la palabra
				salida++;						//hemos encontrado la palabra en busqueda
			}
			similitud = 0;
		}
	}
	return salida;
}

int ContarPalabras(string text){
	string texto = " ";						//por la manera en la que compruebo una palabra...
	texto += text;							//...el espacio es necesario
	int palabras;
	for (int i = 0; i < texto.length(); i++){
		if (texto[i] == ' ' and texto[i+1] != ' '){ //en teoria la palabras van separadas por espacios
			palabras++;
		}
	}
	return palabras;
}

main (){
	setlocale(LC_ALL, "Spanish");
	string texto, palabra;
	cout << "\nIngrese el parrafo: \n"; 
	getline(cin, texto);					//getline para tomar varion caracteres separados por espacios
	cout << "\nIngrese la palabra: \n";
	getline(cin, palabra);
	cout << "\nNumero de palabras: " << ContarPalabras(texto) << endl;
	cout << "Repeticiones de la palabra es: " << BuscarPalabra(texto, palabra) << endl;
}
