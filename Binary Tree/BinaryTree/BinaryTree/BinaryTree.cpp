// BinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BinarySearchTree.h"

int main()
{
    BinarySearchTree<int>mytree; 
    mytree.insert(23);
    mytree.insert(44);
    mytree.insert(12);
    mytree.insert(88);
    mytree.insert(6);
    mytree.inOrderTrav();

}
