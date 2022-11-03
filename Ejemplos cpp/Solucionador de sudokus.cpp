#include <iostream>
using namespace std;

int tablero[9][9] = {};

bool libre(int fil, int col, int num){
	for (int i = 0; i < 9; i++){
		if(tablero[i][col] == num){return false;}
		if(tablero[fil][i] == num){return false;}
		if(tablero[fil-fil%3][col-col%3] == num){return false;}
	}
	return true;
}

bool solucionar(){ 
	int errores = 0;
	for (int fil = 0; fil < 9; fil++) {
		for (int col = 0; col < 9; col++) {
			if(tablero[fil][col] == 0){
				for (int num = 1; num <= 9; num++) {
	    			if(libre(fil, col, num)){
						tablero[fil][col] = num;
						if(solucionar()){return true;}
						else{tablero[fil][col] = 0;}
					}
   		 		}
   		 		return false;
			}
		}
	}
	return true;
}

void traducirEntrada(string input){
	int num, it = 0;
	bool noInt = true;
	for (int fil = 0; fil < 9; fil++){
		for (int col = 0; col < 9; col++){
			for (it; noInt && it < input.length(); it++){
				num = (int)input[it];
				if(num >= 48 && num <= 57){
					tablero[fil][col] = num-48;
        			noInt = false;
				}else if(num == 46){
					tablero[fil][col] = 0;
					noInt = false;
				}
			}
			noInt = true;
    	}
	}
}

void imprimirSudoku(){
	for (int fil = 0; fil < 9; fil++) {
		if (fil % 3 == 0 && fil != 0){cout << "-------------------\n";}
		for (int col = 0; col < 9; col++) {
			if (col % 3 == 0 && col != 0){cout << '|';}
    		cout << tablero[fil][col] << ' ';
    	}
    cout << endl;	
	}
}

int main(){
	string input;
	getline(cin, input);
	
	traducirEntrada(input);
	cout << "entrada: " << endl;
	imprimirSudoku();
	
	if(solucionar()){
		cout << "\n salida: " << endl;
		imprimirSudoku();
	}else{
		cout << "no se puede solucionar" << endl;
	}
		
	return 0;
}
//116 a 80 sin comentarios 
