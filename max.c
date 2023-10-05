#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
 
  // Vurderer preconditon:
  assert(size > 0); 

  // Deklarerer variabler:
  int maxValue = numbers[0];
  
  for(int i = 0; i < size; i++){
  // Løber gennem listen og finde den største.

    if(maxValue < numbers[i]) {
      maxValue = numbers[i]; // Sætter den større variabel til at være maxValue.
    }

  }
    
  return maxValue;
}

#ifndef TEST

int main() {

	return 0;
}

#endif
