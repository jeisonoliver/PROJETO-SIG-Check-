//////int validarctt (int celular) {

////  if (celular >= 900000001 || celular <= 999999999) {
////    return 1;
////  }
///  else {
///    return 0;
///  }
///}


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