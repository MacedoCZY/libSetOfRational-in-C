/* Arquivo: Racional.h
 * Implementa: Arquivo header para o tipo de dados abstrato para números racionais e as operações básicas
 *    (soma, subtração, multiplicação e divisão, além da simplificação e do MDC, e operações de leitura
 *     e escrita em console). A estrutura funciona como uma classe em C++, com as limitações de não implementar herança, nem 
 *     sobrecarga de métodos nem de operadores.
 * Autor: Prof. Josué P. Castro
 * Data: 19/05/2020
 */

#include <stdio.h>
#include <stdlib.h>

// declaração do tipo de dados RACIONAL
typedef struct
{
   // campos (ou atributos)
   int num; // numerador
   int den; // denominador
} RACIONAL;

//Funções da classe Racional
// função MDC
int mdc(int n, int d);

// função simplifica
RACIONAL simplifica(RACIONAL A);

// função soma
RACIONAL addRac(RACIONAL A, RACIONAL B);

// função de subtração
RACIONAL subRac(RACIONAL A, RACIONAL B);

// função de multiplicação
RACIONAL multRac(RACIONAL A, RACIONAL B);

// função de divisão
RACIONAL diviRac(RACIONAL A, RACIONAL B);

