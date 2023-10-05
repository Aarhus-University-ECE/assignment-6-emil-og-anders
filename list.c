#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
//function that returns number of elements in in the list
int size(node *l) {

  int nodesize = 0; // Tæller variabel
  
  // Vurderer postcondition:
  assert(l != NULL);
  
  node *p = l;
  //while loop stops when p->next = null
  while (p->next != NULL) {
    nodesize++; // Tæller en op for hver nyt element med data != NULL
    p = p->next;
  } // p points to the last element
  
	return nodesize;
}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out

  assert(l != NULL);

  node *p = l->next;
  while (p != NULL) {
    printf("%d, ", p->data);
    p = p->next; // Mangler denne stykke kode for at komme videre til næste element.
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list

  assert(l != NULL);

  node *p = l->next;

  int maxValue = 0;
  //while loop leder efter p->next og stopper når den er = NULL
  //den returnerer maxValue, der er lig den p->data, der har den største værdi
  while (p->next != NULL) {

    if (maxValue < p->data)
    {
      maxValue = p->data;
    }
    p = p->next;
  }
  
  return maxValue;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node)); //HEAD
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here

  int sizeofnode = size(list);

  printf("%d\n\n", sizeofnode);

  add(list, 2);
  // Show list here

  printout(list);

  printf("Largest: %d \n",largest(list));

  return 0;
}

#endif