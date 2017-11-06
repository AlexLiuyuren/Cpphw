//
//  main.cpp
//  Library
//
//  Created by 刘驭壬 on 2017/10/31.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include <iostream>
#include "literature.hpp"
#include "library.hpp"
#include "common.hpp"

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

using namespace std;
int main(int argc, const char * argv[]) {
    Library library;
    char input[] = "lib.txt";
    char output[] = "res.txt";
    library.readFromFile(input);
    library.printLibrary();
    library.sortByTime();
    library.printLibrary();
    library.sortByTitle();
    library.printLibrary();
    library.sortByAuthor();
    library.printLibrary();
    library.writeToFile(output);
    return 0;
}
