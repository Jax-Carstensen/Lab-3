 /*
	Name:         Jax Carstensen
	Semester:     2
	Due:          02/17/2021
	Lab:          Lab 3 (Stack)
	Description:  A stack is an abstract data type in which elements are added and removed from only one end; a “last in, first out” structure. 
	This stack must be implemented as a linked structure (ie using pointers). 

*/
#ifndef ITEM_H
#define ITEM_H
#endif

class Item {
private:
	ItemType item;
	Item* next;
public:
	ItemType getItem() { return item; }
	//Pre:  None
	//Post: Returns the value this node holds

	void setItem(ItemType newItem) { item = newItem; }
	//Pre:  An ItemType to set this node's value
	//Post: Sets this node's value to the provided ItemType

	Item* getNext() { return next; }
	//Pre:  None
	//Post: Returns the next linked Item

	void setNext(Item* newNext) { next = newNext; }
	//Pre:  An Item to set as the next node
	//Post: Links this node to the next
};
