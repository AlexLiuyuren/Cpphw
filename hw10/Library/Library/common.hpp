//
//  common.hpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef common_h
#define common_h

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <fstream>

void splitString(const std::string& s, std::vector<std::string>& v, const std::string& c);
std::string int2str(int time);
int str2int(std::string str);
#endif /* common_h */
