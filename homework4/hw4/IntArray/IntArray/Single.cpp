//
//  Single.cpp
//  IntArray
//
//  Created by 刘驭壬 on 2017/10/8.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "Single.hpp"
#include <iostream>

Single* Single::getSingle(){
    //std::cout << "number of Single: " << num << std::endl;
    if (singleton==NULL){
        singleton = new Single();
    }
    return singleton;
}

Single* Single:: singleton = NULL;
int Single:: num = 0;
