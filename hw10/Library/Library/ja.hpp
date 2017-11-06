//
//  ja.hpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef ja_hpp
#define ja_hpp

#include <stdio.h>
#include "common.hpp"
#include "literature.hpp"
using namespace std;

//标题、作者、期刊名称、出版社名称、发表时间
class JA:public Literature{
private:
    string journalName;
    string pressName;
public:
    JA();
    //标题、作者、期刊名称、出版社名称、发表时间
    JA(string ti, string a, string jN, string pN, int t);
    string toString();
    static JA* toJA(string input);
};

#endif /* ja_hpp */
