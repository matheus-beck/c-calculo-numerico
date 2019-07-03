// UNIVERSIDADE FEDERAL DA BAHIA
// MAT174 - CALCULO NUMÉRICO I
// Autor: Matheus Beck

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	//X = 0.033761 para o intervalo de 0 a 1 segundo o WolframAlpha
	
	double a = 0;
	double b = 1;
	double epsilon = 0.001;

	while(1){
		//Condição de Parada:
		if ((fabs(b-a)) < epsilon){ //fabs() retorna o módulo da operação
			cout << endl << "\nFim. Epsilon pertence a: ";
			cout << a <<" e "<< b << endl;
			cout << endl << "X = "<< (a+b)/2 << endl; //Raiz encontrada final
			
			return 0; 
		} else {
			double x = (a+b)/2;
			//Hard coded the function: x³ - 9x + 3
			if (((a*a*a - 9*a + 3) * (x*x*x - 9*x + 3)) > 0){
				a = x;
				cout << "Valor de X: " << a << endl; //Raiz encontrada
			} else {
				b = x;
				cout << "Valor de X: " << b << endl; //Raiz encontrada
			}
		}
	}

	return 0;
}
