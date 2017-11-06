//
//  IntSet.cpp
//  hw6
//
//  Created by 刘驭壬 on 2017/10/14.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "IntSet.hpp"
#include <iostream>

using namespace std;

IntSet::IntSet(int a[], int len){
    for (int i = 0; i < len; i++){
        s.insert(a[i]);
    }
    return;
}

IntSet::IntSet(const IntSet& is){
    for (auto x:is.s){
        s.insert(x);
    }
}

void IntSet::insert(int a){
    s.insert(a);
}

const IntSet IntSet::operator +(const IntSet &is){
    IntSet tmp((*this));
    for (auto x : is.s){
        tmp.insert(x);
    }
    return tmp;
}

const IntSet IntSet::operator &(const IntSet &is){
    IntSet tmp;
    for (auto x:s){
        if (is.s.count(x) > 0){
            tmp.insert(x);
        }
    }
    return tmp;
}
const IntSet IntSet::operator -(const IntSet &is){
    IntSet tmp;
    for (auto x:s){
        if (is.s.count(x) == 0){
            tmp.insert(x);
        }
    }
    return tmp;
}

void IntSet::print(){
    for (auto x:s){
        cout << x << " ";
    }
    cout << endl;
}
