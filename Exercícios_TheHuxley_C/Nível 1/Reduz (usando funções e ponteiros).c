#include <stdio.h>
#include <stdlib.h>

void sub(float x, float y,float subtracao){
  float *pont_x = &x;
  float *pont_y = &y;
  subtracao = *pont_x - *pont_y;
  printf("%.2f ", subtracao);
  printf("%.2f", y);
  return;
}

int main(void) {
  float x, y;
  float subtracao;
  scanf("%f %f", &x, &y);
  sub(x,y,subtracao);
}