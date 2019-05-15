// UNIVERSIDADE FEDERAL DA BAHIA
// MAT174 - CALCULO NUMÉRICO I
// Autor: Matheus Beck

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double funcao(double x){
	//Se desejar utilizar outra f(x), alterar essa função
	return 2.02*pow(x, 5) - 1.28*pow(x, 4) + 3.06*pow(x,3) + 2.92*pow(x,2) - 5.66*x + 6.08;
}

bool verificaMultiplicacao(double a, double x){
	double f1 = funcao(a);
	double f2 = funcao(x);
	if ((f1 * f2) > 0){
		return true;
	}
	else
		return false;
}

//Dados iniciais: intervalo [a, b] e precisão epsilon
double metodoBissecao(double a, double b, double epsilon){
	//cout << "Valor de a: " << a << " Valor de b: " << b;
	//Condição de Parada:
	if ((fabs(b-a)) < epsilon){ //fabs() retorna o módulo da operação

		cout << endl << "\nFim. Epsilon pertence a: ";
		cout << a <<" e "<< b << endl;
		cout << endl << "X = "<< (a+b)/2 << endl; //Raiz encontrada final
		return 0; 
	}
	else {
		if (verificaMultiplicacao(a,(a+b)/2) == true){
			a = (a + b)/2;
			cout << "Valor de X: " << a; //Raiz encontrada
			cout << " Valor de fabs(x-xbarra): " << fabs(-1.31146 - a) << endl; //Valor do erro absoluto
			return metodoBissecao(a, b, epsilon);
		}
		else {
			b = (a + b)/2;
			cout << "Valor de X: " << b; //Raiz encontrada
			cout << " Valor de fabs(x-xbarra) = " << fabs(-1.31146 - b) << endl; //Valor do erro absoluto
			return metodoBissecao(a, b, epsilon);
		}	
	}
}

int main(){
	//O valor real de X é -1.31146 segundo o WolframAlpha
	metodoBissecao(-2,-1,0.001);
	return 0;
}
