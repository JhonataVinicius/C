#include <stdio.h>

int main(){
  int  valor, cem, cinq, vint, dez, cinc, dois, um;
  scanf("%d",&valor);
  printf("%d\n",valor);
  cem = valor/100;
  valor -= cem*100 ;
  cinq = valor/50;
  valor -= cinq*50;
  vint = valor/20;
  valor -= vint*20;
  dez = valor/10;
  valor -= dez*10;
  cinc = valor/5;
  valor -= cinc*5;
  dois = valor/2;
  valor -= dois*2;
  um = valor;
  printf("%d nota(s) de R$ 100,00\n",cem);
  printf("%d nota(s) de R$ 50,00\n",cinq);
  printf("%d nota(s) de R$ 20,00\n",vint);
  printf("%d nota(s) de R$ 10,00\n",dez);
  printf("%d nota(s) de R$ 5,00\n",cinc);
  printf("%d nota(s) de R$ 2,00\n",dois);
  printf("%d nota(s) de R$ 1,00\n",um);
  
  return 0;
}