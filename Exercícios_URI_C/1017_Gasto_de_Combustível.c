#include <stdio.h>

int main(){
  int  tempo, velocidade;
  float litros, distancia;
  scanf("%d%d",&tempo,&velocidade);
  distancia = tempo*velocidade;
  litros = distancia/12;
  printf("%.3f\n",litros);

  return 0;
}