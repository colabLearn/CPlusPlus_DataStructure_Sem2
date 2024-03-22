#pragma once
#include "intNode.h"
class intLinkedList
{
private:
	intNode* head;   //pointer to the head of list

public:
	intLinkedList();  //empty list constructor
	~intLinkedList(); //destructor
	bool isEmpty();   // ist list empty?
	const int& front() const; //get front element
	//add to list front
	void addFront(const int& data);  
	//remove front item list
	void removeFront(); 

	//These two are inefficient
	void addBack(const int& data);
	void removeBack();

	void printListData();
	
};

