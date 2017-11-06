//
//  IntArray.cpp
//  IntArray
//
//  Created by 刘驭壬 on 2017/10/8.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "IntArray.hpp"
#include <iostream>

IntArray::IntArray(int len){
    if(len <= 0){
        std::cout << "Array length should be larger than 0" << endl;
        return;
    }
    array = new int(len);
    memset(array, 0, len*sizeof(int));
    maxlen = len;
}

IntArray::IntArray(){
    array = new int(10);
    memset(array, 0, 10*sizeof(int));
    maxlen = 10;
}

int& IntArray::operator [](int i){
    if(i >= maxlen){
        int *np = new int(2 * i);
        memset(np, 0, 2*i*sizeof(int));
        memcpy(np, array, maxlen * sizeof(int));
        delete[] array;
        array = np;
        maxlen = 2 * i;
        return array[i];
    }else{
        return array[i];
    }
}

IntArray::~IntArray(){
    delete []array;
}
