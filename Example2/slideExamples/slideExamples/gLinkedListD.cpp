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
	add(header, inData);
}

template <typename T>
void gLinkedListD<T>::addBack(const T& inData) 
{
	add(trailer->prev, inData);
}

template <typename T>
void gLinkedListD<T>::add(gNodeD<T>* v, const T& inData)
{
	gNodeD<T>* newNode = new gNodeD<T>;
	newNode->data = inData;
	newNode->next = v->next;
	newNode->prev = v;
	v->next->prev = newNode;
	v->next = newNode;

}

template <typename T>
void gLinkedListD<T>::removeFront()
{
	remove(header->next);

}

template <typename T>
void gLinkedListD<T>::removeBack()
{
	remove(trailer->prev);
}

template <typename T>
void gLinkedListD<T>::remove(gNodeD<T>* old)
{
	gNodeD<T>* u = old->prev;
	gNodeD<T>* w = old->next;
	u->next = w;
	w->prev = u;
	delete old;
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