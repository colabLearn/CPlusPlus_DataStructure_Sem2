#include "intLinkedListS.h"
#include <cstdlib>
#include <iostream>
using namespace std;
#include <string>

intLinkedListS::intLinkedListS()
	: head(NULL) { }
intLinkedListS::~intLinkedListS()
{
	while (!isEmpty())
	{
		removeFront();
	}
}
bool intLinkedListS::isEmpty() const
{
	return head == NULL;
	// check if linkedList is empty
}
const int& intLinkedListS::front() const
{
	return this->head->data;
	//get front element
}
void intLinkedListS::addFront(const int& e)
{
	intNodeS* newNode = new intNodeS;
	newNode->data = e;
	newNode->next = this->head;
	this->head = newNode;

	// add to front of list
}
void intLinkedListS::removeFront()
{
	intNodeS* old = this->head;
	this->head = old->next;
	delete old;
	//remove front item list
}
void intLinkedListS::printData() const
{
	if (isEmpty())
	{
		cout << "LinkedList is empty!" << endl;
	}
	else
	{
		intNodeS* current = this->head;
		while (current != NULL)
		{
			cout << current->data << endl;
			current = current->next;
		}

	}
	
	
	//print all data in linkedList
}
