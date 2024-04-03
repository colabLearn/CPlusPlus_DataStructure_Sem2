#include "gLinkedListD.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
gLinkedListD<T>::gLinkedListD() 
{
	header = new gNodeD<T>;
	trailer = new gNodeD<T>;
	header->next = trailer;
	trailer->prev = header;
}

template <typename T>
gLinkedListD<T>::~gLinkedListD()
{

}

template <typename T>
bool gLinkedListD<T>::isEmpty() const
{
	return header->next = trailer;
}

template <typename T>
void gLinkedListD<T>::addFront(const T& inData)
{
	gNodeD<T>* newNode = new gNodeD<T>;
	newNode->data = inData;
	newNode->next = header->next;
	newNode->prev = header;
	header->next->prev = newNode;
	header->next = newNode;
}

template <typename T>
void gLinkedListD<T>::getAllData()
{
	gNodeD<T>* curr = header->next;
	while (curr != trailer)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}

template class gLinkedListD<int>;
template class gLinkedListD<double>;
template class gLinkedListD<string>;