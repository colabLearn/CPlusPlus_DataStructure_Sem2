#include "intLinkedList.h"
using namespace std;
#include <string>
#include <iostream>

intLinkedList::intLinkedList()
	:head(nullptr) { }
intLinkedList::~intLinkedList()
{
	while (!isEmpty())
	{
		removeFront();
	}
}
bool intLinkedList::isEmpty()
{
	return this->head == nullptr;
}   
const int& intLinkedList::front() const
{
	return head->data;
}
void intLinkedList::addFront(const int& in_data)
{
	intNode* newNode = new intNode; //create new node
	newNode->data = in_data;
	newNode->next = head;
	head = newNode;
}
//remove front item list
void intLinkedList::removeFront()
{
	intNode* old = this->head;
	head = old->next;
	delete old;

}
void intLinkedList::addBack(const int& data)
{
	intNode* newNode = new intNode;
	if (isEmpty())
	{
		newNode->next = head;
		head = newNode;
	}
	else 
	{  
		intNode* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		newNode->next = nullptr;
		temp->next = newNode;

	}
	
}
void intLinkedList::removeBack()
{
	if (!isEmpty())
	{
		if (head->next == nullptr)
		{
			head = nullptr;
		}
		else
		{
			intNode* temp = head;
			intNode* nextTemp = temp->next;
			while (nextTemp->next != nullptr)
			{
				temp = nextTemp;
				nextTemp = nextTemp->next;
			}
			temp->next = nullptr;
			
		}
		

	}
}

void intLinkedList::printListData()
{
	if (isEmpty())
	{
		cout<< "LinkedList is empty!"
			<< " No data to print."
			<< endl;
	}
	else
	{
		intNode* temp = head;
		cout << temp->data << endl;
		while (temp->next != nullptr)
		{
			temp = temp->next;
			cout << temp->data << endl;
		}
		
	}
}
