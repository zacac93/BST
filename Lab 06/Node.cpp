//
//  Node.cpp
//  Lab 06
//
//  Created by Zac Clark on 3/15/16.
//  Copyright © 2016 Zac Clark. All rights reserved.
//

#include "Node.h"

using namespace std;

int Node::getData()
{
    return value;
}
NodeInterface * Node::getLeftChild()
{
    return Left;
}
NodeInterface * Node::getRightChild()
{
    return Right;
}
int Node::getHeight()
{
    return height;
}
