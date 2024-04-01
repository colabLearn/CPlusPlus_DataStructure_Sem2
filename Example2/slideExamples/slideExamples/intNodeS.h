#pragma once
class intNodeS  //Node of a list
{
private:
	int data;    //element value store in the node
	intNodeS* next;  //Next node in the list

	friend class intLinkedListS;  //provide intLinkedListS access
};

