// UNIVERSIDADE FEDERAL DA BAHIA
// MAT174 - CALCULO NUMÉRICO I
// Autor: Matheus Beck

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double funcao(double x){
	//Se desejar utilizar outra f(x), alterar essa função
	return 2.02*pow(x, 5) - 1.28*pow(x, 4) + 3.06*pow(x,3) + 2.92*pow(x,2) - 5.66*x + 6.08; //(1)
}

double funcaoDerivada(double x){
	//Depende exclusivamente da minha funcao()
  	return 10.1*pow(x, 4) - 5.12*pow(x, 3) + 9.18*pow(x,2) + 5.84*x - 5.66; //Derivada de (1)
}
void metodoNewton(double xi, double epsilon, int qtdMaxLoop){
	int count;
	for (count = 0; count < qtdMaxLoop; count++){
		double x = xi - (funcao(xi)/funcaoDerivada(xi));
		cout << "k = " << count << "; x = " << x;
		//Condição de parada:
		if ((fabs(x-xi) < epsilon) || fabs(x-xi)/fabs(x) < epsilon || fabs(xi) < epsilon){
			cout << "Raiz encontrada: " << x << "\n";
			break;
		}
		xi = x;
		//Valor do erro absoluto:
		cout << " Valor de fabs(x-xbarra): " << fabs(-1.31146 - xi) << endl;
	}
}

int main(){
	//O valor real de X é -1.31146 segundo o WolframAlpha
	cout << "Após o método de newton: \n";
	metodoNewton(-1, 0.001, 20);

	return 0;
}
