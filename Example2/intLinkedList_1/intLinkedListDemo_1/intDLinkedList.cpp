#include "intDLinkedList.h"
#include <iostream>
#include <string>
using namespace std;

intDLinkedList::intDLinkedList()
{
	header = new intDNode;
	
	trailer = new intDNode;
	header->next = trailer;
	trailer->prev = header;
}
bool intDLinkedList::isEmpty() const
{
	return header->next == trailer;
}
void intDLinkedList::addFront(int inData)
{
	intDNode* newNode= new intDNode;
	newNode->data = inData;
	newNode->next = header->next;
	newNode->prev = header;
	header->next->prev = newNode;
	header->next = newNode;
}
void intDLinkedList::getAllData()
{
	intDNode* curr = header->next;
	while (curr != trailer)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}
void intDLinkedList::addBack(int inData)
{
	intDNode* newNode = new intDNode;
	newNode->data = inData;
	newNode->next = trailer;
	newNode->prev = trailer->prev;
    trailer->prev->next = newNode;
	trailer->prev = newNode;
}
void intDLinkedList::removeFront()
{
	intDNode* old = header->next;
	header->next = old->next;
	old->next->prev = header;
	delete old;
}