 /*
	Name:         Jax Carstensen
	Semester:     2
	Due:          02/17/2021
	Lab:          Lab 3 (Stack)
	Description:  A stack is an abstract data type in which elements are added and removed from only one end; a “last in, first out” structure. 
	This stack must be implemented as a linked structure (ie using pointers). 

*/
#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	Stack stack = Stack();
	stack.Push(5);
	stack.Push(6);
	stack.Push(2);
	cout << stack.visualize() << endl;
	stack.Pop();
	cout << stack.visualize() << endl;
	stack.Pop();
	cout << stack.visualize() << endl;
	stack.Pop();
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);
	stack.Push(6);
	stack.Push(7);
	stack.Push(8);
	stack.Push(9);
	stack.Push(10);
	stack.Push(11);
	stack.Push(12);
	stack.Push(13);
	stack.Push(14);
	cout << stack.visualize() << endl;
	cout << "List Full? " << stack.isFull() << endl;
	return 0;
}
