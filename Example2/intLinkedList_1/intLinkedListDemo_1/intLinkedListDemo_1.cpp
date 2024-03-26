// intLinkedListDemo_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "intNode.h"
#include "intLinkedList.h"
#include <iostream>
using namespace std;
#include <string>

int main()
{
    intNode myNode(5);
    intNode* nextNode = new intNode(23);
    myNode.setNext(nextNode);
    intNode* currentNode = &myNode;
    while (currentNode != nullptr)
    {
        cout << currentNode->getData() << endl;
        currentNode = currentNode->getNext();

    }

    ////============================================
    //intLinkedList* myLinkList = new intLinkedList();
    //
    //myLinkList->addFront(23);
    //myLinkList->addFront(34);
    //myLinkList->addFront(54);
    //
    //cout << myLinkList->front() << endl;
    //myLinkList->getAllData();

    
}

