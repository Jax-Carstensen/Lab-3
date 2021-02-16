 /*
	Name:         Jax Carstensen
	Semester:     2
	Due:          02/17/2021
	Lab:          Lab 3 (Stack)
	Description:  A stack is an abstract data type in which elements are added and removed from only one end; a “last in, first out” structure. 
	This stack must be implemented as a linked structure (ie using pointers). 

*/
#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#endif
typedef int type;

enum RelationType {
	LESSER,
	GREATER,
	EQUAL
};

class ItemType {
private:
	type value;
public:
	ItemType() { value = 0; }
	ItemType(type newValue) { value = newValue; }

	RelationType ComparedTo(ItemType otherItem) {
		if (value > otherItem.getValue())
			return GREATER;
		else if (value < otherItem.getValue())
			return LESSER;
		return EQUAL;
	}
	//Pre:  An ItemType to compare to
	//Post: GREATER if this ItemType's value is higher, LESSER if it is lesser, and EQUAL if the values are the same

	void setValue(type newValue) { value = newValue; }
	//Pre:  An int (in this case) to set this item's value to
	//Post: Sets this item's value to the provided one

	type getValue() { return value; }
	//Pre:  None
	//Post: Returns this item's value
};
