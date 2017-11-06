//
//  Single.hpp
//  IntArray
//
//  Created by 刘驭壬 on 2017/10/8.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef Single_hpp
#define Single_hpp

#include <stdio.h>
#include <iostream>
class Single{
public:
    static Single* getSingle();
private:
    Single(){num++;}
    ~Single(){num--;}
    Single(Single& a){std::cout<< "no copy constructor" << std::endl;}
    static Single* singleton;
    static int num;
};

#endif /* Single_hpp */
