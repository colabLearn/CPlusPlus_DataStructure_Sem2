#pragma once
template <typename T>
class BinarySearchTree;

template <typename T>
class Node
{
private:
	T data;
	Node<T>* left;
	Node<T>* right;
	friend class BinarySearchTree<T>;
};

