//
//  literature.hpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef literature_hpp
#define literature_hpp

#include <stdio.h>
#include "common.hpp"

using namespace  std;

class Literature{
protected:
    string title;
    string author;
    int time; 
public:
    Literature();
    Literature(string ti, string s, int t);
    static Literature* factory(string input);
    virtual string toString();
    friend bool compareTime(Literature *l1,Literature *l2);
    friend bool compareAuthor(Literature *l1,Literature *l2);
    friend bool compareTitle(Literature *l1,Literature *l2);
    
};

#endif /* literature_hpp */
