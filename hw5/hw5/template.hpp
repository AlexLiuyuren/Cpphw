//
//  template.hpp
//  hw5
//
//  Created by 刘驭壬 on 2017/10/12.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef template_hpp
#define template_hpp

#include <stdio.h>
#include <iostream>

using namespace std;



template <class T>
T& max(T p[], size_t count){
    //使用指针更好，减少了复制的开销和避免了无法复制的情况。
    T* maxx = p;
    for (int i = 1; i < count; i++){
        if (p[i] > *maxx){
            maxx = p + i;
        }
    }
    return *maxx;
}

#endif /* template_hpp */
