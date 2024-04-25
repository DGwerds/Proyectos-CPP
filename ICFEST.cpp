#include <iostream>
#include <stdlib.h>
using namespace std; 

//esto se puede optimizar mil veces mas pero nose como

int restantes(int n, int i, int p){	
	if (100-n == 0 and i == 3){					//verifica que el numero de respuestas al llegar a la ultima pregunta sea 100
		if (p < 0){
			p = 0;
		}
		cout << "El puntaje de esta persona es "<< p << " puntos de 500 posibles.";
		exit(1);
	} else if (i == 3){							//si no son 100 y ya es la ultima pregunta da error
		cout << "Error el numero de respuestas ingresadas es diferente de 100.\n";
		exit(1);
	}
	cout << "respuestas faltantes: " << 100-n << "\n";	//si no es ningun caso anterior, prosigue
}
main(){
	int rc, ri, rb, p, pr = 0;			//rc = respuestas correctas, ri = incorrectas, rb = blanco, p = puntaje, pr = preguntas
	cout << "Ingrese el numero de respuestas correctas: ";		//podria acortar todo con unaa matriz pero... lo hice primero asi
	cin >> rc;
	pr += rc;
	restantes(pr, 1, p);
	for (rc; rc > 0; rc--){
		p += 5;
	}
	cout << "Ingrese el numero de respuestas incorrectas: ";
	cin >> ri;
	pr += ri;
	restantes(pr, 2, p);
	for (ri; ri > 0; ri--){
		p -= 2;
	}
	cout << "Ingrese el numero de respuestas en blanco: ";
	cin >> rb;
	pr += rb;
	restantes(pr, 3, p);
}

