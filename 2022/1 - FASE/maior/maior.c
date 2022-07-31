#include <stdio.h>
#include <stdlib.h>

int somarDigitos(int numero);

int main() {
  int i, n, m, s;
  scanf("%d%d%d",&n,&m,&s);
  for(i = n; i <= m; i++){
    if((somarDigitos(i)) == s){
      printf("%d\n",i);
    }
  }
  return 0;
}

int somarDigitos(int numero) {
    int soma = 0;
    while (numero != 0) {
        soma   += numero % 10;
        numero  = numero / 10;
    }
    return soma;
}