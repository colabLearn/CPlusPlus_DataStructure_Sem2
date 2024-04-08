#pragma once
#include "Node.h"

template <typename T>
class BinarySearchTree
{
private:
	Node<T>* root;
	void insert(Node<T>*& current, T inData);
	void inOrder(Node<T>*& current);
public:
	BinarySearchTree();
	void insert(T inData);
	void inOrderTrav();
};

