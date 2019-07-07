# Cálculo das raízes de um polinômio através do método da bisseção e do método de newton utilizando C++
[UFBA] Trabalho da disciplina MAT174 - CALCULO NUMÉRICO I 
  
  Dada uma função a(x) = 2.02x^5 - 1.28x^4 + 3.06x^3 + 2.92x^2 - 5.66x + 6.08 utilizada num estudo do comportamento 
mecânico dos materiais, onde a(x) é o comprimento da fissura, implementamos dois algoritmos em c++ utilizando dois 
dos métodos numéricos vistos em sala: Método da Bisseção e Método de Newton. Através desses métodos, determinamos 
as raízes do polinômio, ou seja, a(x) = 0 e comparamos os resultados da utilização desses dois métodos

Os algoritmos foram desenvolvidos utilizando c++ com as bibliotecas iostream, iomanip e math.h. Para o método da bisseção, 
o algoritmo foi feito utilizando sucessivas chamadas recursivas da função metodoBissecao (a, b, epsilon), onde os valores de 
‘a’ e ‘b’ são alterados conforme o resultado da multiplicação entre f(a) e f(a+b/2) é maior ou menor que zero. Já para o método 
de newton, utilizamos duas funções, representando nosso a(x) e nosso a’(x) respectivamente, onde nosso valor de x aproximado é 
calculado segundo a expressão x = xi - (funcao(xi)/funcaoDerivada(xi)), x é calculado n vezes, sendo n a quantidade máxima de 
iterações do loop, passada como argumento da função.

Para executar os programas:
```c++
$ g++ -o metodobs metodobissecao.cpp
$ ./metodobs
```
ou
```c++
$ g++ -o metodonewton metodonewton.cpp
$ ./metodonewton
```
