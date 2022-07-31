#include <stdio.h>
#include <stdlib.h>
int main() {
  int i, n, s, aux, soma, cont = 0;
  scanf("%d%d",&n, &s);
  int vet[n-1];
  for(i = 0; i <= n-1; i++){
    scanf("%d",&vet[i]);
  }
  for(i = 0; i <= n-1; i++){
    aux = i-1;
    soma = 0;
    while(aux<n){
      aux++;
      soma += vet[aux];
      if(soma == s){
        cont++;
      }
    }
  }
  printf("\n%d\n",cont);
  return 0;
}