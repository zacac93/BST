//
//  BST.cpp
//  Lab 06
//
//  Created by Zac Clark on 3/15/16.
//  Copyright © 2016 Zac Clark. All rights reserved.
//

#include "BST.h"

using namespace std;


NodeInterface * BST::getRootNode()
{
    return Root;
}
bool BST::add(int data)
{
    return addNode(Root, data);
}
bool BST::remove(int data)
{
    return removeNode(Root, data);
}
void BST::clear()
{
    while (Root != NULL)
        remove(Root->value);
}
bool BST::addNode(Node*& n, int data)
{
    if (n == NULL)
    {
        n = new Node(data, 0);
        return true;
    }
    else if (data < n->getData())
    {
        addNode(n->Left, data);
    }
    else if (data > n->getData())
    {
        addNode(n->Right, data);
    }
    else
        return false;

    return false;
}
bool BST::removeNode(Node*& n, int data)
{
    if (n == NULL)
        return false;
    else if (data < n->value)
        removeNode(n->Left, data);
    else if (data > n->value)
        removeNode(n->Right, data);
    else
    {
        Node* temp = n;
        if (n->Left == NULL)
            n = n->Right;
        else if (n->Right == NULL)
            n = n->Left;
        else
        {
            replaceParent(temp, temp->Left);
        }
        delete temp;
        return true;
    }
    return true;
}
void BST::replaceParent(Node*& oldRoot, Node*& currentRoot)
{
    if (currentRoot->Right != NULL)
        replaceParent(oldRoot, currentRoot->Right);
    else
    {
        oldRoot->value = currentRoot->value;
        oldRoot = currentRoot;
        currentRoot = currentRoot->Left;
    }
}
