// DataStructureDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
#include "SLinkedList.h"



int main()
{
	
	SLinkedList<string> myList2;
	SLinkedList<int> myList;
	myList.addFront(23);
	myList2.addFront("This is my string list");
	if (myList.isEmpty())
	{
		cout << "This list is empty" << endl;
	}
	else
	{
		cout << "This list is not empty" << endl;
	}

	cout << myList.front() << endl;
	cout << myList2.front() << endl;
}
