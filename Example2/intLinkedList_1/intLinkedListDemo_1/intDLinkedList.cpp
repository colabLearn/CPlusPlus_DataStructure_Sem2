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