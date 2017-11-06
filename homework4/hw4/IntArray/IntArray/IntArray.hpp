//
//  IntArray.hpp
//  IntArray
//
//  Created by 刘驭壬 on 2017/10/8.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef IntArray_hpp
#define IntArray_hpp

#include <stdio.h>
using namespace std;
class IntArray{
private:
    int *array;
    int maxlen;

public:
    IntArray(int len);
    IntArray();
    ~IntArray();
    int& operator [](int i);
};
#endif /* IntArray_hpp */
