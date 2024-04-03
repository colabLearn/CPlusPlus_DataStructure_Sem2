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
	void addBack(const T& inData);
	void removeFront();
	void removeBack();
	void getAllData();
private:
	gNodeD<T>* header;
	gNodeD<T>* trailer;
protected:
	void add(gNodeD<T>* v, const T& data);
	void remove(gNodeD<T>* v);
};

