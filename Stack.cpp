#include "Stack.h"

Stack::~Stack() {
	while (!isEmpty())
		Pop();
}

bool Stack::isEmpty() {
	return top == NULL;
}
bool Stack::isFull() {
	Item* location;
	try {
		location = new Item();
		delete location;
		return false;
	}
	catch (bad_alloc exception) {
		return true;
	}
}
string Stack::visualize() {
	string toReturn = "";
	Item* currentItem = top;
	while (currentItem != NULL) {
		toReturn += to_string(currentItem->getItem().getValue()) + " ";
		currentItem = currentItem->getNext();
	}
	return toReturn;
}
void Stack::Push(ItemType item) {
	if (isFull()) return;
	Item* newItem = new Item();
	newItem->setItem(item);
	if (isEmpty()) {
		top = newItem;
		return;
	}
	newItem->setNext(top);
	top = newItem;
}
void Stack::Pop() {
	Item* test;
	test = top->getNext();
	delete top;
	top = test;
}
ItemType Stack::Top() {
	return top->getItem();
}