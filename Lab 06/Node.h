//
//  Node.cpp
//  Lab 06
//
//  Created by Zac Clark on 3/15/16.
//  Copyright © 2016 Zac Clark. All rights reserved.
//

#pragma once
#include "NodeInterface.h"
#include <algorithm>

using namespace std;

class Node : public NodeInterface
{
public:
    Node(int value, int height, Node* Left_child = NULL, Node* Right_child = NULL) : value(value), height(height), Left(Left_child), Right(Right_child) {};
    ~Node(){};
    int getData();
    NodeInterface * getLeftChild();
    NodeInterface * getRightChild();
    int getHeight();
    Node* Left;
    Node* Right;
    int value;
    int height;
    
private:
};