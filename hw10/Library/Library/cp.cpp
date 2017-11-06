//
//  cp.cpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "cp.hpp"
#include "literature.hpp"
#include <sstream>
using namespace std;

//CP: Hierarchical Distributed Representations for Statistical Language Modeling; John Blitzer and Kilian Q. Weinberger and Lawrence K. Saul and Fernando Pereira; NIPS2004; 2004

CP::CP():Literature(){
    conferenceName = "";
}
CP::CP(string ti, string a, string cfn, int t):Literature(ti, a, t){
    conferenceName = cfn;
}

string CP::toString(){
    string res = "CP: ";
    res += title;
    res += "; ";
    res += author;
    res += "; ";
    res += conferenceName;
    res += "; ";
    string tmp = int2str(time);
    res += tmp;
    return res;
}

CP* CP::toCP(string input){
    string kind = input.substr(0, 2);
    string content = input.substr(4, input.length());
    cout << content << endl;
    if(kind != "CP"){
        cout << "error CP" << endl;
        return new CP();
    }
    vector<string> tmp;
    splitString(content, tmp, "; ");
    string title = tmp[0];
    string author = tmp[1];
    string conferenceName = tmp[2];
    int time = str2int(tmp[3]);
    return new CP(title, author, conferenceName, time);
}
