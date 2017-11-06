//
//  ja.cpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "ja.hpp"

JA::JA():Literature(){
    journalName = "";
    pressName = "";
}

JA::JA(string ti, string a, string jN, string pN, int t):Literature(ti, a, t){
    journalName = jN;
    pressName = pN;
}

string JA::toString(){
    string res = "JA: ";
    res += title;
    res += "; ";
    res += author;
    res += "; ";
    res += journalName;
    res += "; ";
    res += pressName;
    res += "; ";
    string tmp = int2str(time);
    res += tmp;
    return res;
}
JA* JA::toJA(string input){
    string kind = input.substr(0, 2);
    string content = input.substr(4, input.length());
    cout << content << endl;
    if(kind != "JA"){
        cout << "error JA" << endl;
        return new JA();
    }
    vector<string> tmp;
    splitString(content, tmp, "; ");
    string title = tmp[0];
    string author = tmp[1];
    string journalName = tmp[2];
    string pressName = tmp[3];
    int time = str2int(tmp[4]);
    return new JA(title, author, journalName, pressName, time);
}
