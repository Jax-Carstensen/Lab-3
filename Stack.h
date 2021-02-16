 /*
	Name:         Jax Carstensen
	Semester:     2
	Due:          02/17/2021
	Lab:          Lab 3 (Stack)
	Description:  A stack is an abstract data type in which elements are added and removed from only one end; a “last in, first out” structure. 
	This stack must be implemented as a linked structure (ie using pointers). 

*/
#ifndef STACK_H
#define STACK_H
#endif


#include "ItemType.h"
#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	Item* top = NULL;
public:
	Stack() {}
	~Stack();
	bool isEmpty();
	//Pre:  None
	//Post: Returns true if the stack is empty, and false if it is not.

	bool isFull();
	//Pre:  None
	//Post: Returns true if the stack is full, and false if it is not

	string visualize();
	//Pre:  None
	//Post: Returns a string visualizing the entire stack

	void Push(ItemType item);
	//Pre:  An item to add to the top of the list
	//Post: Adds the provided item to the top of the list

	void Pop();
	//Pre:  None
	//Post: Removes the item from the top of the stack

	ItemType Top();
	//Pre:  None
	//Post: Returns the item on top of the stack

};
