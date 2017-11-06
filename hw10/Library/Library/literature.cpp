//
//  literature.cpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "literature.hpp"
#include "cp.hpp"
#include "ja.hpp"
#include "bo.hpp"

Literature::Literature(){
    title = "";
    author = "";
    time = 0;
}

Literature::Literature(string ti, string a, int t){
    title = ti;
    author = a;
    time = t;
}

Literature* Literature::factory(string input){
    string kind = input.substr(0, 2);
    if (kind == "CP"){
        return CP::toCP(input);
    }else if (kind == "JA"){
        return JA::toJA(input);
    }else if (kind == "Bo"){
        return Bo::toBo(input);
    }else{
        return new Literature();
    }
}

string Literature::toString(){
    string res = "";
    res += title;
    res += "; ";
    res += author;
    res += "; ";
    string tmp = int2str(time);
    res += tmp;
    return res;
}
