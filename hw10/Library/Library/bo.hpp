//
//  bo.hpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef bo_hpp
#define bo_hpp

#include <stdio.h>
#include "literature.hpp"
#include "common.hpp"
using namespace  std;

//标题、作者、出版社、刊号、发表时间
class Bo:public Literature{
private:
    string pressName;
    string issue;
public:
    Bo();
    Bo(string ti, string a, string pN, string issue, int t);
    string toString();
    static Bo* toBo(string input);
};

#endif /* bo_hpp */
