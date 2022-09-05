#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define MAX 2000
typedef struct {
  int partida[MAX], chegada[MAX], tempo[MAX], preco[MAX];
} rotas;
int main()
{
  int i, j, k, v, n, m, x, y, sP, sT, t = 0, in = 0;
  rotas r;
  scanf("%d %d %d",&v,&n,&m);
  for(i = 0; i < m; i++){
    scanf("%d %d %d %d",&r.partida[i],&r.chegada[i],&r.tempo[i],&r.preco[i]);
  }
  scanf("%d %d",&x,&y);
  for(i = 0; i < m; i++){
    if(rpat){
      
    }
    START:
    for(j = in; j < m; i++){
      if(i != j && (r.preco[i]+r.preco[j])<v && (r.partida[i]!=r.partida[j]) && (r.preco[i]!=r.preco[j]) && r.chegada[j] <= y){
        sP += r.preco[i] +r.preco[j];
        sT += r.tempo[i] +r.tempo[j];
        if(sP==v){
          t = sT;
          goto EXIT;        
        }
        if(sP > v){
          sP = 0;
          sT = 0;
          in++;
          goto START;
        }
        break;
      }
    }    
  }
    EXIT:
    printf("%d\n",t);
  return 0;
}