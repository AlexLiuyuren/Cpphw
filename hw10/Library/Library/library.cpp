//
//  library.cpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "library.hpp"
#include "common.hpp"
#include "literature.hpp"

void Library::sortByTime(){
    sort(lib.begin(), lib.end(), compareTime);
}

void Library::sortByAuthor(){
    sort(lib.begin(), lib.end(), compareAuthor);
}

void Library::sortByTitle(){
    sort(lib.begin(), lib.end(), compareTitle);
}
void Library::printLibrary(){
    for (auto ptr : lib){
        cout << ptr->toString() << endl;
    }
    return;
}
void Library::writeToFile(char* filename){
    ofstream os;
    os.open(filename);
    if (!os){
        cout << "Opening failed" << endl;
        return;
    }
    for (auto ptr : lib){
        os << ptr->toString() << endl;
    }
    os.close();
    return;
}

void Library::readFromFile(char* filename){
    ifstream is;
    is.open(filename);
    if (!is){
        cout << "Opening failed" << endl;
        return;
    }
    while(!is.eof()){
        string tmp;
        getline(is, tmp);
        Literature *a = Literature::factory(tmp);
        lib.push_back(a);
    }
    is.close();
    return;
}

bool compareTime(Literature *l1,Literature *l2)
{
    return l1->time < l2->time; //升序排列，如果改为return a>b，则为降序
}

bool compareAuthor(Literature *l1,Literature *l2){
    return l1->author < l2->author;
}

bool compareTitle(Literature *l1,Literature *l2){
    return l1->title < l2->title;
}
