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
    
  return maxValue;
}

#ifndef TEST

int main() {
  // int numbers[] = {5, 10, 20, 6, 10, -1, 9};
  // printf("%d", max(numbers, 7));

  // int numbers[] = {5, 1, 4};
  // printf("%d", max(numbers, 3));

  // int numbers[] = {-2};
  // printf("%d", max(numbers, 1));

	return 0;
}

#endif
