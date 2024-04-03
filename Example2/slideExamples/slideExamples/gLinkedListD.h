#pragma once
#include "gNodeD.h"

template <typename T>
class gLinkedListD
{
public:
	gLinkedListD();
	~gLinkedListD();
	bool isEmpty() const;
	void addFront(const T& inData);
	void getAllData();
private:
	gNodeD<T>* header;
	gNodeD<T>* trailer;
};

