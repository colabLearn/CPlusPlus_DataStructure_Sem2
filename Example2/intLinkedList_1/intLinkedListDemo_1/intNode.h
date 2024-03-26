#pragma once
class intNode
{
private:
	int data;
	intNode* next;

public:
	intNode(int indata);
	const int& getData() const;
	void setData(int inData);
	intNode* getNext() const;
	void setNext(intNode* inNext);
	
};

