#pragma once
class intNode //a not in a list of integer
{   
private:
	int data;   //data stored in the node
	intNode* next; //next node in the list
	
	/*
	* provide StringLinkedList access
	*/
	friend class intLinkedList; 
	
};

