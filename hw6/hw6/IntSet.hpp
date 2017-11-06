//
//  IntSet.hpp
//  hw6
//
//  Created by 刘驭壬 on 2017/10/14.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef IntSet_hpp
#define IntSet_hpp

#include <stdio.h>
#include <set>
using namespace std;

class IntSet{
    set<int> s;
public:
    IntSet(int a[], int len);
    IntSet(){}
    IntSet(const IntSet& is);
    void insert(int a);
    const IntSet operator +(const IntSet &is);
    const IntSet operator &(const IntSet &is);
    const IntSet operator -(const IntSet &is);
    void print();
};

#endif /* IntSet_hpp */
