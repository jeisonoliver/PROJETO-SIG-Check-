
/// Função para validar a entrada do valor do cheque ///

 
 int validarValor(int valorReal, int valorCentavo){

if(valorReal < 0){
  return 0;
  }
  else if(valorCentavo < 0 || valorCentavo > 99 ){
  return 0;
  }
  else{
  return 1;
   }
}

/// Função para validar a entrada do numero para contato ///

#include <string.h>

int ntelefone (char celular[]){
int tamanho;
tamanho = strlen(celular);
if (tamanho < 9 || tamanho > 10) {
  return 0;
}
if (celular[0] != '9') {
    return 0;
  }
int i = 1;
while ( i < tamanho){
  if (celular[i] < '0' && celular[i] > '9'){
    return 0;
  }
    i = i + 1;
}
return 1;
}

/// Função para validar a entrada de um numero de 4 digitos! será usada para validar o numero do cheque e o numero da agencia bancaria ///
#include <string.h>

int Vnumero (char numero[]){
int tamanho;
tamanho = strlen(numero);
if (tamanho < 1 || tamanho > 4) {
  return 0;
}
int i = 0;
while ( i < tamanho){
  if (numero[i] < '0' || numero[i] > '9'){
    return 0;
    }
    i = i + 1;
}
return 1;
}

/// Função para valiadar o numero da conta bancaria do cliente ///
#include <string.h>
int VnumeroConta (char numeroC[]){
int tamanho;
tamanho = strlen(numeroC);
if (tamanho < 1) {
  return 0;
}
int i = 0;
while ( i < tamanho){
  if (numeroC[i] < '0' || numeroC[i] > '9'){
    return 0;
    }
    i = i + 1;
}
return 1;
}

/// Função para validar um unico digito! será usada para validar os digitos da conta bancaria e da agencia bancaria ///
#include <string.h>
int VDigito (char numero[]){
int tamanho;
tamanho = strlen(numero);
if (tamanho != 1) {
  return 0;
}
int i = 0;
while ( i < tamanho){
  if (numero[i] < '0' || numero[i] > '9'){
    return 0;
    }
    i = i + 1;
}
return 1;
}

//// Função para validar a entrada de um CPF! ////
#include <string.h>

int valCPF (char CPF[]){
  int CPFint[11];
  int t;
  int numeroV;
  int valorPart;
  int V;
  int restodiv;
  int numeroV1;
  int digito1;
  int valorPart1;
  int V1;
  int restodiv1;
  int digito2;

t = strlen(CPF);
  if(t != 11) {
   return 0;
  }
for (int i = 0; i < 11; i++ ){
  CPFint[i] = CPF[i] - 48;
  }
/// calculando se o 1° digito verificador é valido ///
  numeroV = 10;
  V = 0;
  for (int i = 0; i < 9; i++){
    valorPart = CPFint[i] * numeroV;
    numeroV = numeroV - 1;
    V = valorPart + V;
  }
  restodiv = V%11;

if (restodiv < 2) {
 digito1 = 0;
}
else if (restodiv >= 2 ){
  digito1 = 11 - restodiv;
}
if (CPFint[9] == digito1){
  return 1;
}
else{
  return 0;
}

/// calculando se o 2° digito verificador é valido ///
numeroV1 = 11;
V1 = 0;
for (int i = 0; i < 10; i++){
    valorPart1 = CPFint[i] * numeroV1;
    numeroV1 = numeroV1 - 1;
    V1 = valorPart1 + V1;
}
  restodiv1 = V1%11;

if (restodiv1 < 2) {
 digito2 = 0;
}
else if (restodiv1 >= 2 ){
  digito2 = 11 - restodiv1;
}
if (CPFint[10] == digito2){
  return 1;
}
else{
  return 0;
}
}