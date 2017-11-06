//
//  main.cpp
//  作业1
//
//  Created by 刘驭壬 on 2017/9/15.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include <iostream>
#include "Point.hpp"
#include "LinkedList.hpp"
#include "Queue.hpp"
using namespace std;

void test_point();
void test_linkedlist();
void test_queue();

int main(int argc, const char * argv[]) {
    // test_point();
    // test_linkedlist();
    test_queue();
    return 0;
}

void test_point(){
    Point a = Point(3, 4);
    Point b = Point(6, 8);
    Point c = a.relative(b);
    c.print();
    cout << "极坐标: " << a.r() << endl;
    cout << "极角: " << a.theta() << endl;
    cout << "a, b距离: "<< a.distance(b)<< endl;
    cout << "a 在 b 左上方: " << a.is_above_left(b) << endl;
    a.set_position(3, 4);
    a.print();
}

void test_linkedlist(){
    LinkedList * ll = new LinkedList();
    ll->add_head(1);
    ll->add_head(2);
    ll->print_list();
    ll->add_tail(3);
    ll->add_tail(4);
    ll->print_list();
    cout << ll->delete_head() << endl;
    ll->print_list();
    cout << ll->delete_tail() << endl;
    ll->print_list();
    ll->delete_tail();
    ll->delete_tail();
    ll->print_list();
    ll->delete_tail();
    ll->delete_head();
    ll->add_tail(5);
    delete ll;
    ll->print_list();
}

void test_queue(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.queue_print();
    cout << q.dequeue() << endl;
    q.queue_print();
    q.dequeue();
    q.dequeue();
}
