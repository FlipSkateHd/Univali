#include <iostream>
using namespace std;

/* VETORES - LEIA 6 NUMEROS INTEIROS E EXIBA-OS NA ORDEM INVERSA */

const int tam = 6;
int main (int argc, char *argv[]) {
  int v[tam];

  for (int i = 0; i < tam; i++){
    cin >> v[i];
  }
  cout << "\n";

  for (int i = tam-1; i >= 0; i--){
    cout << v[i] << " ";
  }
  return 0;
}
