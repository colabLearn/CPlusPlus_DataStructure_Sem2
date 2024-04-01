#pragma once
#include "intNodeS.h"

class intLinkedListS
{
public:
	intLinkedListS();  //constructor
	~intLinkedListS();  //destructor
	bool isEmpty() const;   // check if linkedList is empty
	const int& front() const; //get front element
	void addFront(const int& e); // add to front of list
	void removeFront();  //remove front item list
	void printData() const; //print all data in linkedList
private:
	intNodeS* head;  //pointer to the head of list
};

