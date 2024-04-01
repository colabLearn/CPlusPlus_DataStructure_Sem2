#include "gLinkedListS.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

template <typename T>
gLinkedListS<T>::gLinkedListS()
	:head(NULL) {}

template <typename T>
gLinkedListS<T>::~gLinkedListS()
{
	while (!isEmpty())
	{
		removeFront();
	}
}

template <typename T>
bool gLinkedListS<T>::isEmpty() const
{
	return this->head == NULL;
}

template <typename T>
void gLinkedListS<T>::addFront(const T& e)
{
	gNodeS<T>* newNode = new gNodeS<T>;
	newNode->data = e;
	newNode->next = this->head;
	this->head = newNode;
}

template <typename T>
const T& gLinkedListS<T>::front() const
{
	return this->head->data;
}

template <typename T>
void gLinkedListS<T>::removeFront()
{
	gNodeS<T>* old = this->head;
	head = old->next;
	delete old;
}

template <typename T>
void gLinkedListS<T>::printData() const
{
	if (isEmpty())
	{
		cout << "LikedList is empty!" << endl;
	}
	else
	{
		gNodeS<T>* current = this->head;
		while (current != NULL)
		{
			cout<< current->data << endl;
			current = current->next;
		}
	}
}

//Explicit instantiation of the template classes
template class gLinkedListS<int>;
template class gLinkedListS<double>;
template class gLinkedListS<string>;