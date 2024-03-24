#pragma once

template<typename T>
struct Node {
	T data;

	Node<T>* next;
};


template <typename T>
class SLinkedList
{
private:
	Node<T>* head;
public:
	SLinkedList();
	~SLinkedList();
	bool isEmpty() const;
	const T& front() const;
	void addFront(const T e);
	void removeFront();

};

