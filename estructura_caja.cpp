#include <iostream>
#include <locale.h>
using namespace std;

float area(float ancho, float largo, float alto){
	return (2*ancho*largo)+(2*ancho*alto)+(2*largo*alto);
}

float volumen(float ancho, float largo, float alto){
	return ancho*largo*alto;
}

int mayor(int vec[]){
	int guardar;
	bool cambio = true;
	while(cambio){
		cambio = false;
		for(int i = 0; i<9; i++){
			if(vec[i]<vec[i+1]){
				guardar = vec[i];
				vec[i] = vec[i+1];
				vec[i+1] = guardar;
				cambio = true;
			}	
		}
	}
	return vec[0];
}

main(){
	setlocale(LC_ALL, "Spanish");
	int caja;
	int volum[9];
	
	struct Caja{
		float ancho = -1;
		float largo = -1;
		float alto = -1;
	};
	struct Caja dimenciones[9];
	
	cout << "INGRESAR DATOS CAJA ";
	cin >> caja;
	cout << "-------------------------\n";
	while (caja != 0 and caja <= 9){
		cout << "Ingrese el ancho caja " << caja << " (cm): ";
		cin >> dimenciones[caja].ancho;
		cout << "Ingrese el largo caja " << caja << " (cm): ";
		cin >> dimenciones[caja].largo;
		cout << "Ingrese el alto caja " << caja << " (cm): ";
		cin >> dimenciones[caja].alto;
		cout << "Datos guardados.\n";
		cout << "-------------------------\n\n";
		cout << "INGRESAR DATOS CAJA ";
		cin >> caja;
		cout << "-------------------------\n";
	}
	
	cout << "MATERIAL NECESARIO: \n";
	
	for (int id_caja = 1; id_caja < 9; id_caja++){
		if (dimenciones[id_caja].ancho != -1 and dimenciones[id_caja].largo != -1 and dimenciones[id_caja].alto != -1){
			cout << "Caja " << id_caja << " (cm2): " << area(dimenciones[id_caja].ancho, dimenciones[id_caja].largo, dimenciones[id_caja].alto)<<endl;
		}
	}
	cout << "\nVOLUMEN:\n";
	for (int id_caja = 1; id_caja <= 9; id_caja++){
		int cajita = id_caja-1;
		volum[cajita] = 0;
		if (dimenciones[cajita].ancho != -1 and dimenciones[cajita].largo != -1 and dimenciones[cajita].alto != -1){
			volum[cajita] = volumen(dimenciones[cajita].ancho, dimenciones[cajita].largo, dimenciones[cajita].alto);
			cout << "Caja " << cajita << " (cm3): " << volum[cajita] <<endl;
		}	
	}
	
	cout << "El mayor volumen es: " << mayor(volum);
}
