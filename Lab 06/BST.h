//
//  BST.cpp
//  Lab 06
//
//  Created by Zac Clark on 3/15/16.
//  Copyright © 2016 Zac Clark. All rights reserved.
//

#pragma once
#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface
{
public:
    BST() : Root(NULL) {};
    ~BST() {clear();};
    NodeInterface * getRootNode();
    bool add(int data);
    bool remove(int data);
    void clear();
    bool addNode(Node*& n, int data);
    bool removeNode(Node*& n, int data);
    void replaceParent(Node*& oldRoot, Node*& currentRoot);
    
private:
    Node* Root;
};
