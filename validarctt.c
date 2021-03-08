

int validarctt (long int celular) {

  if (celular >= 900000001 || celular <= 999999999) {
    return 1;
  }
  else {
    return 0;
  }
}