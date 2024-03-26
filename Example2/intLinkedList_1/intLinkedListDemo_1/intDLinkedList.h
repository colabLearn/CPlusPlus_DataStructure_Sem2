#pragma once
struct intDNode {
	int data;
	intDNode* next;
	intDNode* prev;
};

class intDLinkedList
{

public:
	intDLinkedList();
	bool isEmpty() const;
	void addFront(int inData);
	void getAllData();
	/*~intDLinkedList();
	
	const int& front() const;
	
	void addBack(int inData);
	void removeFront();
	void removeBack();
	void getAllData();*/

private:
	intDNode* header;
	intDNode* trailer;
//protected:
	//void add(intDNode* v, int inData);  //insert new node with before v
	//void remove(intDNode* v); //remove node v
	
};

