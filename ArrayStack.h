/*Edwin Y. Melendez Lopez #89139
Raudo E. Columna Manon  #86724

CECS 3212 Sec. 20
22 de agosto de 2017
Profesora Claudia Talavera

ArrayStack Exercise*/

// ArrayStack.h

#pragma once

#include<iostream>
#include<assert.h>
#include"StackInterface.h"

using namespace::std;

const int MAX_STACK = 5;

template<class ItemType>
class ArrayStack : public StackInterface<ItemType>
{
public:
	ArrayStack();
	bool isEmpty() const;
	bool push(const ItemType& newEntry);
	bool pop();
	ItemType peek() const;

private:
	ItemType items[MAX_STACK];
	int top;
};

template<class ItemType>
ArrayStack<ItemType>::ArrayStack()
{
	top = -1;
}

template<class ItemType>
bool ArrayStack<ItemType>::isEmpty() const
{
	return top < 0;
} // end isEmpty

template<class ItemType>
bool ArrayStack<ItemType>::push(const ItemType & newEntry)
{
	bool result = false;
	if (top < MAX_STACK - 1) {
		top++;
		items[top] = newEntry;
		result = true;
	}// end if

	return result;
}// end push

template<class ItemType>
bool ArrayStack<ItemType>::pop()
{
	bool result = false;
	if (!isEmpty()) {
		top--;
		result = true;
	}// end if

	return false;
}// end pop

template<class ItemType>
ItemType ArrayStack<ItemType>::peek() const
{
	assert(!isEmpty());		// Enforce precondition

							// Stack is not empty; return top
	return items[top];
}// end peek