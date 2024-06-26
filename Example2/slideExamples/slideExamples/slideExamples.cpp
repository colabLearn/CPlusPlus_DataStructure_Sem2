// slideExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "intLinkedListS.h"
#include "gLinkedListS.h"
#include "Newarray.h"
#include <cstdlib>
#include "gLinkedListD.h"
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int main()
{
    //int* p;
    //int x = 34;
    //p = &x;
    ////You could access x value with *p
    //cout << *p << endl;
    //*p = 44;
    //cout << x << endl;
    //x = 99;
    //cout << *p << endl;
    
    //=====Demo: pointer pointing to functions
   /* int (*op)(int a, int b);

    op = &subtract;
    cout<<op(5, 2)<<endl;
    int* p = NULL;*/
    
    //======Demo2: Pitfall declaring pointers
    //int* x, y, z;
    //int intVar = 34;
    //int intVar2 = 54;
    //x = &intVar;
    //y = intVar2;  //This will not work
    /*intLinkedListS* myLinkedList = new intLinkedListS;
    myLinkedList->addFront(12);
    myLinkedList->addFront(34);
    myLinkedList->addFront(45);
    myLinkedList->addFront(99);
    myLinkedList->printData();
    cout << myLinkedList->front() << endl;*/


//====generic linkedListDemo=====
 /*   gLinkedListS<int>* myList 
        = new gLinkedListS<int>;
    myList->addFront(23);
    myList->addFront(54);
    myList->printData();

    gLinkedListS<string>* myList2
        = new gLinkedListS<string>;

    myList2->addFront("Tunji");
    myList2->addFront("Kunle");

    myList2->printData();*/

    //Newarray<double> myArr(2000, 2024);
    ////myArr.indexR();
    //cout << myArr.outOfIndex(2023) << endl;
    //myArr.arrCell(199);
    //myArr.storeAt(2022, 23.4);
    //cout<<myArr.getAt(2022)<<endl;
  
//====generic doubly linkedListDemo=====
    //gLinkedListD <string> myList;

    //myList.addFront("123");
    //myList.addBack("Tunji");
    //myList.addBack("768");
    //myList.addBack("Ade");
    //myList.addFront("999");
    //myList.getAllData();
    //cout << "==================" << endl;
    //myList.removeBack();
    //myList.getAllData();
    //cout << "==================" << endl;
    //myList.removeFront();
    //myList.getAllData();

    //===Testing quickSort of Newarray====
    Newarray<int> myArr(1, 9);
    //myArr.printData();
   /* myArr.storeAt(5, 21);
    myArr.storeAt(1, 19);
    myArr.storeAt(2, 99);
    myArr.printData();
    cout << myArr.getAt(1)<<endl;*/
    myArr.storeAt(1, 8);
    myArr.storeAt(2, 2);
    myArr.storeAt(3, 5);
    myArr.storeAt(4, 3);
    myArr.storeAt(5, 9);
    myArr.storeAt(6, 4);
    myArr.storeAt(7, 7);
    myArr.storeAt(8, 6);
    myArr.storeAt(9, 1);
    myArr.printData();
    myArr.sortArray();
    myArr.printData();
    myArr.binarySearchData(4);
    //myArr.quickSort(1, 9);
    //cout << "==================" << endl;
    //myArr.printData();
    ////myArr.indexR();
    
}
