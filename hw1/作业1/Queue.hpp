//
//  Queue.hpp
//  作业1
//
//  Created by 刘驭壬 on 2017/9/15.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include "LinkedList.hpp"

class Queue{
private:
    LinkedList ll;
public:
    void enqueue(int a);
    int dequeue();
    void queue_print();
};

#endif /* Queue_hpp */
