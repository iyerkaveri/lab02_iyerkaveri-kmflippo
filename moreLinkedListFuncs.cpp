// Kavi Iyer and Kelly Flippo
//  5590831        5106695

#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"



void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer

  p = new Node;

  p->data = value;
  p->next = NULL;

  if (list->head == NULL) {
	list->head = p;
	list->tail = p;
    
    
  } else {
	list->tail->next = p;
	list->tail = p;

  }

}

void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL); 

  Node *p = new Node;
  p->data = value;

  if (list->head == NULL){
    list->head = p;
    list->tail = p;
  } else {
    p->next = list->head;
    list->head = p;
  }

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  
  Node *temp;
  temp = new Node;
  temp = list->head;

  Node *max;
  max = new Node;
  max = list->head;

  while (temp != nullptr) {
	if (temp->data > max->data) {
		max = temp;
	}
	temp = temp->next;
  }

  return max; 
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  Node *p = new Node;
  p = list->head;

  Node *min = new Node;
  min = list->head;

  while(p != nullptr){
    if (p->data < min->data){
      min = p;
    }
    p = p->next;
  }

  return min;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  return pointerToMax(list)->data;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, ory occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   smallest value in list (which may not be unique).

  return -42; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  return -42; // STUB!  Replace this line with correct code

}

