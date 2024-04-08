#include "BinarySearchTree.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


template <typename T>
BinarySearchTree<T>::BinarySearchTree()
	:root(nullptr){}

template <typename T>
void BinarySearchTree<T>::insert(Node<T>*& current, T inData)
{
	if (current == nullptr)
	{
		Node<T>* newNode = new Node<T>;
		newNode->data = inData;
		newNode->left = nullptr;
		newNode->right = nullptr;
		current = newNode;
		//cout << current->data << endl;
	}
	else if (inData <= current->data)
	{
		insert(current->left, inData);
	}
	else if (inData > current->data)
	{
		insert(current->right, inData);
	}
}

template <typename T>
void BinarySearchTree<T>::insert(T inData)
{
	
	insert(this->root, inData);

}

template <typename T>
void BinarySearchTree<T>::inOrder(Node<T>*& current)
{
	if(current!=NULL)
	{ 
		
		inOrder(current->left);
		cout << current->data << endl;
		inOrder(current->right);
	}
	
}

template <typename T>
	void BinarySearchTree<T>::inOrderTrav()
{
		if (root == nullptr)
		{
			cout << "Tree is empty!" << endl;
		}
		else
		{
			inOrder(root);
		}
	
		
}


template class BinarySearchTree<int>;