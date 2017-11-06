//
//  cp.hpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef cp_hpp
#define cp_hpp

#include <stdio.h>
#include "literature.hpp"
#include "common.hpp"

using namespace std;

class CP:public Literature{
    string conferenceName;
public:
    CP();
    //标题、作者、会议名称、发表时间
    CP(string ti, string a, string cfn, int t);
    string toString();
    static CP* toCP(string input);
};

#endif /* cp_hpp */
