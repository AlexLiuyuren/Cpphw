//
//  main.cpp
//  hw5
//
//  Created by 刘驭壬 on 2017/10/11.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include <iostream>
#include "pointer.hpp"
#include "template.hpp"
#include <string>
using namespace std;

void pointer_test();
void template_test();
void test();

int main(int argc, const char * argv[]) {
    pointer_test();
    template_test();
    return 0;
}

//这个例子中的string类型，我对于char * 和stl中的string分别实现了比较函数。
void pointer_test(){
    int a[100];
    for (int i = 0; i < 100; i++){
        a[i] = i; 
    }
    cout << *(int *)(max((void *) a, 100, sizeof(int), compare_int)) << endl;
    double b[100];
    for (int i = 0; i < 100; i++){
        b[i] = (double)i+100;
    }
    cout << *(double *)(max((void *) b, 100, sizeof(double), compare_double)) << endl;
    char c[100][6];
    string s[100];
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 5; j++){
            c[i][j] = ((i + 1) * (j + 1) % 26) + 'a';
        }
        c[i][5] = '\0';
        s[i] = string(c[i]);
    }
    for (int i = 0; i < 100; i++){
        cout << c[i] << " ";
    }
    cout << endl;
    cout << (char *)(max((void *) c, 100, 6, compare_string)) << endl;
    cout << *(string *)(max((void *) s, 100, sizeof(string), compare_stl_string)) << endl;
    return;
}

//这个例子中，string类型需要是stl中的string。我无法使用char *, 因为我在max模版函数中
//我无法重载char *比较的 > 符号。单纯使用 > 号比较两个 char数组的话，意思是错误的。

void template_test(){
    int a[100];
    for (int i = 0; i < 100; i++){
        a[i] = i;
    }
    cout << max(a, 100) << endl;
    double b[100];
    for (int i = 0; i < 100; i++){
        b[i] = (double)i+100;
    }
    cout << max(b, 100) << endl;
    string s[100];
    char c[100][6];
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 5; j++){
            c[i][j] = ((i + 1) * (j + 1) % 26) + 'a';
        }
        c[i][5] = '\0';
        s[i] = string(c[i]);
    }
    for (int i = 0; i < 100; i++){
        cout << s[i] << " ";
    }
    cout << endl;
    //注意：被注释的这个函数结果是错误的，因为两个字符数组之间直接用 > 比较，结果是常数。
    //cout << max(c, 100) << endl;
    cout << max(s, 100) << endl;
    return;
}

