#include "SLinkedList.h"
#include <string>
using namespace std;


template<typename T>
SLinkedList<T>::SLinkedList()
	:head(nullptr) { }

template <typename T>
bool SLinkedList<T>::isEmpty() const
{
	return this->head == nullptr;
}

template<typename T>
const T& SLinkedList<T>::front() const
{
	return this->head->data;
}

template <typename T>
void SLinkedList<T>::addFront(const T e)
{
	Node<T>* newNode = new Node<T>;
	newNode->data = e;
	newNode->next = this->head;
	this->head = newNode;
}

template <typename T>
void SLinkedList<T>::removeFront()
{
	Node<T>* old = this->head;
	head = old->next;
	delete old;
}

template<typename T>
SLinkedList<T>::~SLinkedList()
{
	while (!isEmpty())
	{
		removeFront();
	}
}

// Explicit instantiation of the template classes
template class SLinkedList<int>; // Example instantiation with int type
template class SLinkedList<double>; // Example instantiation with double type
template class SLinkedList<string>; // Example instantiation with string type

// Add more instantiations as needed for other types