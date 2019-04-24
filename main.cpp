#include<stdio.h>
#include<stdlib.h>

/*
algoritmo: exemplo de resolucao de uma equacao do segundo grau.
autor: André Nas
email: andrenascontato@gmail.com
ano: 10/04/2019
*/

float get_delta(int a, int b, int c){
  // Δ = b2 – 4ac
  //delta = (b*b) - (4*a*c);
  // delta==196;
  float delta;
  delta = (b * b) - ((4 * a) *(c));

  return delta;
}

int get_raizq(int num){
  int raiz_quadrada = 0;
    //premissa ... raiz quadrada de um numero é igual ao resultado da multiplicao de um numero por ele mesmo.
    for (int i = 1; i < num; i++) {
      int raiz = i * i;
      /* code */
      if (raiz == num) {
        /* code */
        raiz_quadrada = i;
      }//if
    }//for
  return raiz_quadrada;
}

void get_bhaskara(float a, float b, float c, float raiz){
  //– b ± √Δ/2.a
  //√196=14
float x1, x2;
  //x1 = (-b + 14)/2*a;
  //x2 = (-b - 14)/2*a;
    x1 = (-(b + raiz))/(2*a);
    x2 = (-(b - raiz))/(2*a);

  printf(" X1 linha e: %0.f\n", x1);
  printf(" X2 linha e: %0.f\n", x2);

}

int main() {

/*------------------ ---------EQUACAO DE SEGUNDO GRAU -------------------------------------*/
/*-----------------------------------------------------------------------------------------*/
//x2 + 12x – 13 = 0
// atribuindo os valores as variaveis para resolver em bhaskara ... – b ± √Δ/2.a
int a, b, c;
a = 1;
b = 12;
c = -13;

// Descobrindo Delta . . .
// Δ = b2 – 4ac
float delta = get_delta(a, b, c);

//Tirando a raiz quadrada de delta ...
float raiz = get_raizq(delta);

//Resolvendo a equacao com Bhaskara ... //– b ± √Δ/2.a
get_bhaskara(a, b, c, raiz);
//x1 = (-b + √Δ)/2*a;
//x2 = (-b - √Δ)/2*a;

  return 0;
}
