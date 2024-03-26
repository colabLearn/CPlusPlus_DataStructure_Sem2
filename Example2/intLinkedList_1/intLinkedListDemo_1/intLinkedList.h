#pragma once
#include "intNode.h"

class intLinkedList
{
public:
	intLinkedList();
	~intLinkedList();
	bool isEmpty() const;
	const int& front() const;
	void addFront(int inData);
	void removeFront();
	void getAllData();
private:
	intNode* head;
};


