#pragma once
#include "gNodeS.h"

template <typename T>
class gLinkedListS
{
public:
	gLinkedListS();
	~gLinkedListS();
	bool isEmpty() const;
	void addFront(const T& e);
	const T& front() const;
	void removeFront();
	void printData() const;
private:
	gNodeS<T>* head;

};

