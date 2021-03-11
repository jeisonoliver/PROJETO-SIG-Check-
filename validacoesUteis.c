
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
  else{
    return 1;
  }
int i = 0;
while ( i < tamanho){
  if (celular[i] < '0' && celular[i] > '9'){
    return 0;
  } else if (celular[i] == '-'){
    return 0;
  }
  else {
  return 1;
  }
    i = i + 1;
}
return 1;
}

/// Função para validar a entrada de um numero qualquer, no caso usaremos para validar o numero do cheque! ///
#include <string.h>

int Vnumero (char numero[]){
int tamanho;
tamanho = strlen(numero);
if (tamanho < 4 || tamanho > 5) {
  return 0;
}
int i = 0;
while ( i < tamanho){
  if (numero[i] < '0' && numero[i] > '9'){
    return 0;
  }else 
  {
  return 1;
  }
    i = i + 1;
}
return 1;
}