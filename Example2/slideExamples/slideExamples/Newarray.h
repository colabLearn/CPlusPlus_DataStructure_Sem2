#pragma once
#include "gLinkedListS.h"

template <typename T>
struct arr {
	T* p;
	int index;
	arr<T>* next;

};

template <typename T>
class Newarray
{
private:
	int min;
	int max;
	arr<T>* head;
public:
	Newarray(const int min, const int max);
	bool outOfIndex(const int index);
	void indexR() const ;
	arr<T>& arrCell(const int index);
	void storeAt( int index,  T data);
	T* getAt(const int index);
	Newarray<T>* sort(Newarray<T>*);
	//
	/*void storeAt(int index, T data);
	void getAt();*/
};

