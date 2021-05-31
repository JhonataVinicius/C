#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maior(char *A, char *B) {
  if (*A < *B) 
  	return 0;
  
  else if (*A > *B) 
  	return 1;
  
  maior(++A, ++B);
}

int main(void) {
    char A[21], B[21];
    gets(A);
    gets(B);
    
    if (maior(A, B) == 0){
    	printf("%s\n", B);
	}
	
	else{
		printf("%s\n", A);
	}
}