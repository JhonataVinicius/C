#include <stdio.h>
#include <stdlib.h>

int Par[5], Impar[5];
int x=0,j=0;

int main(void){
	int *num = &Par[4];
    for(int i=0; i<=14; i++){
        scanf("%d", num);
        if ((*num % 2)==0 || *num == 0){
            Par[x] = *num;
            x++;

            if(x==5){
                for(x=0; x<=4; x++){
                    printf("par[%d] = %d\n", x, Par[x]);
                    Par[x]=NULL;
                }
                
                x=0;
            }
        }
        else {
            Impar[j] = *num;
            j++;

            if(j==5){
                for(j=0; j<=4; j++){
                    printf("impar[%d] = %d\n", j, Impar[j]);
                    Impar[j]=NULL;
                }
                
                j=0;
            }
        }
    }
	
	for(int i=0; i<j; i++){
        printf("impar[%d] = %d\n", i, Impar[i]);
    } 
	
	for(int i=0; i<x; i++){
	        printf("par[%d] = %d\n", i, Par[i]);
	    }
}