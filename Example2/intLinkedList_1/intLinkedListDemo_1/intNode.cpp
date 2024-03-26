#include "intNode.h"


intNode::intNode(int indata)
	:data(indata), next(nullptr) {}

const int& intNode::getData() const
{
	return this->data;
}
void intNode::setData(int inData)
{
	this->data = inData;
}

intNode* intNode::getNext() const
{
	return this->next;
}

void intNode::setNext(intNode* inNext)
{
	this->next = inNext;
}
