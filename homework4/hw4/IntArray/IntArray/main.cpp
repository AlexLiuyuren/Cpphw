//
//  main.cpp
//  IntArray
//
//  Created by 刘驭壬 on 2017/10/8.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include <iostream>
#include "IntArray.hpp"
#include "Single.hpp"

void test_IntArray();
void test_Single();

int main(int argc, const char * argv[]) {
    test_IntArray();
    test_Single();
    return 0;
}

void test_IntArray(){
    IntArray a;
    a[0] = 10;
    for (int i = 0; i < 20; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

void test_Single(){
    Single* singleton1 = Single::getSingle();
    Single* singleton2 = Single::getSingle();

    if (singleton1 == singleton2)
        fprintf(stderr,"singleton1 = singleton2\n");
    return;
}

