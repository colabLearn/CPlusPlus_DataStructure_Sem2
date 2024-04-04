#include "Newarray.h"
#include <cstdlib>
#include <iostream>
using namespace std;
#include <string>

template <typename T>
Newarray<T>::Newarray(int min, int max)
	:min(min), max(max), head(nullptr)
{
	
	for (int i = max; i >= min; i--)
	{
		arr<T>* newNode = new arr<T>;
		newNode->index = i;
		newNode->next = head;
		head = newNode;
	}
	
}

template <typename T>
bool Newarray<T>::outOfIndex(int index)
{
	return !(index >= this->min && index <= this->max);
}

template <typename T>
void Newarray<T>::indexR() const
{  
	arr<T>* curr = head;
	int count = min;
	while (count<=this->max)
	{
		cout << curr->index << endl;
		curr = curr->next;
		count++;
	}
}

template <typename T>
arr<T>& Newarray<T>::arrCell(const int index)
{
	if (this->outOfIndex(index))
	{
		cout << "Index out of range!" << endl;
		
		static arr<T>* arrNode = nullptr;
		
		return *arrNode;
		
	}
	else
	{
		arr<T>* curr = head;

		while (curr->index != index)
		{
			curr = curr->next;
		}
		return *curr;
		
	}
}

template <typename T>
void Newarray<T>::storeAt( int index,  T data)
{
	arr<T>& myNode= arrCell(index);
	if (&myNode != nullptr)
	{
		myNode.p = &data;
	}
}

template <typename T>
T*  Newarray<T>::getAt(const int index)
{
	arr<T>& myNode = arrCell(index);
	if (&myNode != nullptr)
	{
		return  myNode.p;
	}
	else
	{
		//T* d = nullptr;

		return nullptr;

	}
	
}



//Explicit instantiation of the template classes
template class Newarray<int>;
template class Newarray<double>;