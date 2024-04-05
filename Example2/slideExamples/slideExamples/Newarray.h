#pragma once
#include "arrNode.h"


template <typename T>
class Newarray
{
private:
	int min;
	int max;
	arrNode<T>* arr_head;
public:
	Newarray(const int min, const int max);
	void printData() const;
	bool isEmpty() const;
	bool outOfIndex(int index) const;
	void storeAt(int index, T data);
	T getAt(const int index);
	void sortArray();
	void searchData(T data);
	void binarySearchData(T data);
protected:
	void swap(int i, int j);
	int partition(int begin, int end);
	void  binarySearch(int start,  int end, T data);
	void quickSort(int begin, int end);
	
};



