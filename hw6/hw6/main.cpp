//
//  main.cpp
//  hw6
//
//  Created by 刘驭壬 on 2017/10/13.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include <iostream>
#include "Time.hpp"
#include "IntSet.hpp"

using namespace std;

void testTime();
void testIntSet();
int main(int argc, const char * argv[]) {
    testTime();
    testIntSet();
    return 0;
}

void testTime(){
    Time t1(10, 30, 19);
    Time t2(0, 19, 20);
    Time t3 = t1 - t2;
    t3.print();
    if (t1 >= t2){
        cout << "t1 >= t2" << endl;
    }
    (--t3)++;
    t3.print();
    return ;
}

void testIntSet(){
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 3, 5, 7, 9};
    IntSet isa(a, 5);
    IntSet isb(b, 5);
    IntSet na = isa + isb;
    IntSet nb = isa & isb;
    IntSet nc = isa - isb;
    na.print();
    nb.print();
    nc.print();
    return;
}
