//
//  bo.cpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "bo.hpp"
using namespace std;
Bo::Bo():Literature(){
    pressName = "";
    issue = "";
}
Bo::Bo(string ti, string a, string pN, string issue, int t):Literature(ti, a, t){
    pressName = pN;
    this->issue = issue;
}

string Bo::toString(){
    string res = "Bo: ";
    res += title;
    res += "; ";
    res += author;
    res += "; ";
    res += pressName;
    res += "; ";
    res += issue;
    res += "; ";
    string tmp = int2str(time);
    res += tmp;
    return res;
}

Bo* Bo::toBo(string input){
    string kind = input.substr(0, 2);
    string content = input.substr(4, input.length());
    cout << content << endl;
    if(kind != "Bo"){
        cout << "error Bo" << endl;
        return new Bo();
    }
    vector<string> tmp;
    splitString(content, tmp, "; ");
    string title = tmp[0];
    string author = tmp[1];
    string pressName = tmp[2];
    string issue = tmp[3];
    int time = str2int(tmp[4]);
    return new Bo(title, author, pressName, issue, time);
}
