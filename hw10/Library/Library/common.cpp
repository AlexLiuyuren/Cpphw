//
//  split.cpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include <stdio.h>
#include "common.hpp"
using namespace std;

void splitString(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
    std::string::size_type pos1, pos2;
    pos2 = s.find(c);
    pos1 = 0;
    while(std::string::npos != pos2)
    {
        v.push_back(s.substr(pos1, pos2-pos1));
        
        pos1 = pos2 + c.size();
        pos2 = s.find(c, pos1);
    }
    if(pos1 != s.length())
        v.push_back(s.substr(pos1));
}

string int2str(int time){
    stringstream ss;
    string res;
    ss << time;
    ss >> res;
    return res;
}

int str2int(string str){
    stringstream ss(str);
    int res;
    ss >> res;
    return res;
}
