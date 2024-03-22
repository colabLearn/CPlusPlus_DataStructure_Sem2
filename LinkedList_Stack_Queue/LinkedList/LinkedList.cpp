

#include <iostream>
#include "intLinkedList.h"
using namespace std;


int main()
{
	intLinkedList myList;
	myList.addFront(27);
	myList.addFront(13);
	myList.addFront(99);
	myList.printListData();
	
	cout << myList.front()
		<< endl;
	myList.removeFront();
	cout << myList.front()
		<< endl;
	myList.removeBack();
	cout << "================" << endl;

	myList.printListData();
}
