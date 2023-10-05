#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...
    assert(size > 0);

    int maxValue = numbers[0];
    
    for(int i = 0; i < size; i++){

      if(maxValue < numbers[i]) {
        maxValue = numbers[i];
      }

    }
    
  return -1;
}

#ifndef TEST

int main() {

	return 0;
}

#endif
