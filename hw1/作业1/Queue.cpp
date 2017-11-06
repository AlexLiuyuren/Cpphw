//
//  Queue.cpp
//  作业1
//
//  Created by 刘驭壬 on 2017/9/15.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "Queue.hpp"

void Queue::enqueue(int a){
    ll.add_tail(a);
}

int Queue::dequeue(){
    return ll.delete_head();
}

void Queue::queue_print(){
    ll.print_list();
}
