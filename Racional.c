/* Arquivo: Racional.c
 * Implementa: tipo de dados abstrato para números racionais e as operações básicas
 *    (soma, subtração, multiplicação e divisão, além da simplificação e do MDC, e operações de leitura
 *     e escrita em console).A estrutura funciona como uma classe em C++, com as limitações de não implementar herança, nem 
 *     sobrecarga de métodos nem de operadores.
 * Autor: Prof. Josué P. Castro
 * Data: 19/05/2020
 */

#include "Racional.h"

// função MDC
int mdc(int n, int d)
{
   int r;

   n = abs(n);
   d = abs(d);

   while (d)
   {
      r = n%d;
      n = d;
      d = r;
   }
   return n;
}

// função simplifica
RACIONAL simplifica(RACIONAL A)
{
   int MDC = mdc(A.num, A.den);
   A.num /= MDC;
   A.den /= MDC;
   if (A.den < 0) 
      A.den = -A.den, A.num = -A.num;
   return A;
}

// função soma
RACIONAL addRac(RACIONAL A, RACIONAL B)
{
   RACIONAL aux;

   aux.num = A.num*B.den + A.den*B.num;
   aux.den = A.den*B.den;
   aux = simplifica(aux);
   return aux;
}

// função de subtração
RACIONAL subRac(RACIONAL A, RACIONAL B)
{
   RACIONAL aux;
   
   aux.num = A.num*B.den - A.den*B.num;
   aux.den = A.den*B.den;
   aux = simplifica(aux);
   return aux;
}

// função de multiplicação
RACIONAL multRac(RACIONAL A, RACIONAL B)
{
   RACIONAL aux;

   aux.num = A.num*B.num;
   aux.den = A.den*B.den;
   aux = simplifica(aux);
   return aux;
}

// função de divisão
RACIONAL diviRac(RACIONAL A, RACIONAL B)
{
   RACIONAL aux;
   if (!B.num)
      printf("ERRO: Divisão por zero!\n"), exit(1);
   aux.num = A.num*B.den;
   aux.den = A.den*B.num;
   aux = simplifica(aux);
   return aux;
}
