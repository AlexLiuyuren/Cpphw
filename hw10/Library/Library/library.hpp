//
//  library.hpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef library_hpp
#define library_hpp

#include <stdio.h>
#include "literature.hpp"
#include "common.hpp"

using namespace std;
//a.Library类应该包含存储上述类型文献的数据结构;
//
//b.Library类提供对所有文献按照时间排序的成员函数：void sortByTime();
//
//c.Library类提供对所有文献按照作者排序的成员函数：void sortByAuthor();
//
//d.Library类提供对所有文献按照标题排序的成员函数：void sortByTitle();
//
//e.Library类提供对所有文献信息进行控制台输出的成员函数：void printLibrary();
//
//f.Library类提供读入和写出所有文献的方法：void writeToFile(char* filename); void readFromFile(char* filename);

class Library{
private:
    vector<Literature *> lib;
public:
    void sortByTime();
    void sortByAuthor();
    void sortByTitle();
    void printLibrary();
    void writeToFile(char* filename);
    void readFromFile(char* filename);
};

bool compareTime(Literature *l1,Literature *l2);
bool compareAuthor(Literature *l1,Literature *l2);
bool compareTitle(Literature *l1,Literature *l2);

#endif /* library_hpp */
