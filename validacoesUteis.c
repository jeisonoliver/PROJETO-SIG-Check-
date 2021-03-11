
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