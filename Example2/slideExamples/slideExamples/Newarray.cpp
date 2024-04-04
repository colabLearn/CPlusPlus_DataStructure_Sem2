#include "Newarray.h"
#include <cstdlib>
#include <iostream>
using namespace std;
#include <string>
#include <stdexcept>

template <typename T>
Newarray<T>::Newarray(int in_min, int in_max)
	:min(in_min), max(in_max), arr_head(nullptr)
{
	if (min > max) {
		// Handle the case where min is greater than max
		std::cerr << "Error: min cannot be greater than max." << std::endl;
		// You may want to throw an exception here or handle the error differently
		return;
	}
	for (int i = max; i >= min; i--)
	{
		T* ptr = new T;
		arrNode<T>* newNode = new arrNode<T>;
		newNode->index = i;
		newNode->data = ptr;
		newNode->next = this->arr_head;
		this->arr_head = newNode;
	}
}

template <typename T>
bool Newarray<T>::isEmpty() const
{
	return this->arr_head == nullptr;
}

template <typename T>
void Newarray<T>::printData() const
{
	if (isEmpty())
	{
		cout << "LikedList is empty!" << endl;
	}
	else
	{
		arrNode<T>* current = this->arr_head;
		while (current != NULL)
		{
			cout << *current->data << endl;
			current = current->next;
		}
	}
}

template <typename T>
bool Newarray<T>::outOfIndex(int index) const
{
	return index < this->min || index > this->max;
}

template <typename T>
void Newarray<T>::storeAt(int index, T data)
{
	arrNode<T>* newNode = this->arr_head;
	
	while (newNode->index!=index)
	{
		//cout << newNode->index << endl;
		newNode = newNode->next;
		
	}
	if (newNode != nullptr)
	{
		//cout << "======Out of the while=====" << endl;
		//cout << newNode->index << endl;
		*(newNode->data) = data;
	}
	else
	{
		// Handle the case where 'index' is not found in the list
		std::cerr << "Error: Index not found in the list." << std::endl;
	}
	
}

template <typename T>
T Newarray<T>::getAt(const int index) 
{
	arrNode<T>* newNode = this->arr_head;
	while (newNode != nullptr && newNode->index != index)
	{
		newNode = newNode->next;
	}
	if (newNode != nullptr)
	{
		return *newNode->data;
	}
	else
	{
		// Handle the case where 'index' is not found in the list
		std::cerr << "Error: Index not found in the list." << std::endl;
		//throw std::runtime_error("Index not found in the list.");
		return NULL;
	}

}

//template <typename T>
//void Newarray<T>::indexR() const
//{  
//	for (int i = min; i <= max; i++)
//	{
//		cout << this->cusVal_arrVal[i] << endl;
//	}
//}
//
//template <typename T>
//arr<T>& Newarray<T>::arrCell(const int index)
//{
//	if (this->outOfIndex(index))
//	{
//		cout << "Index out of range!" << endl;
//		
//		static arr<T>* arrNode = nullptr;
//		
//		return *arrNode;
//		
//	}
//	else
//	{
//		arr<T>* curr = head;
//
//		while (curr->index != index)
//		{
//			curr = curr->next;
//		}
//		return *curr;
//		
//	}
//}
//
//template <typename T>
//void Newarray<T>::storeAt( int index,  T data)
//{
//	arrCell(index).p = &data;
//	/*arr<T>* curr = head;
//	
//	while (curr->index != index)
//	{
//		cout << curr->index << ","<<index <<endl;
//		curr = curr->next;
//		
//	}*/
//	
//}
//
//template <typename T>
//T*  Newarray<T>::getAt(const int index)
//{
//	arr<T>& myNode = arrCell(index);
//	if (&myNode != nullptr)
//	{
//		return  myNode.p;
//	}
//	else
//	{
//		//T* d = nullptr;
//
//		return nullptr;
//
//	}
//	
//}
//
//template <typename T>
//void Newarray<T>::swap(int i, int j)
//{
//	T temp = *getAt(i);
//	this->arrCell(i).p = getAt(j);
//	this->arrCell(j).p = &temp;
//}
//
//template <typename T>
//void Newarray<T>::quickSort(int begin, int end)
//{
//	if (end <= begin) return; //base case
//
//	int pivotIndex = partition(begin, end);
//	quickSort(begin, pivotIndex-1);
//	quickSort(pivotIndex+1, end);
//}
//
//template <typename T>
//int Newarray<T>::partition(int begin, int end)
//{
//	T pivot = *getAt(end);
//	int i = begin - 1;
//	for (int j = begin; j <= end-1; j++)
//	{
//		if (this->getAt(j) < &pivot)
//		{
//			i++;
//			swap(i, j);
//		}
//	}
//	i++;
//	swap(i, end);
//	return i;
//}
//

	
	




//Explicit instantiation of the template classes
template class Newarray<int>;
template class Newarray<double>;