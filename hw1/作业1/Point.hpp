//
//  Point.hpp
//  作业1
//
//  Created by 刘驭壬 on 2017/9/15.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Point{
private:
    int x, y;
public:
    Point(int a, int b):x(a), y(b){};
    void print(){cout << x << " " << y << endl;}
    double r();
    double theta();
    double distance(const Point& p);
    Point relative(const Point& p);
    bool is_above_left(const Point& p);
    void set_position(int a, int b);
};

#endif /* Point_hpp */
