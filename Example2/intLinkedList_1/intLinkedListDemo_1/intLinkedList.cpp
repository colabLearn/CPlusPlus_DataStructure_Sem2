#include "intLinkedList.h"
#include <iostream>
#include <string>
using namespace std;

intLinkedList::intLinkedList()
	:head(nullptr) {}
bool intLinkedList::isEmpty() const
{
	return head == nullptr;
}
void intLinkedList::removeFront()
{
	intNode* old = head;
	head = old->getNext();
	delete old;
}
intLinkedList::~intLinkedList()
{
	while (!isEmpty()) {
		removeFront();
	}
}

const int& intLinkedList::front() const
{
	return this->head->getData();
}
void intLinkedList::addFront(int inData)
{
	intNode* newNode = new intNode(inData);
	newNode->setNext(this->head);
	this->head = newNode;
}
void intLinkedList::getAllData()
{
	intNode* currNode = head;
	while (currNode != nullptr)
	{
		cout<< currNode->getData() << endl;
		currNode = currNode->getNext();
	}

}

