//
//  Point.cpp
//  作业1
//
//  Created by 刘驭壬 on 2017/9/15.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "Point.hpp"
#include <cmath>

using namespace std;

double Point::r(){
    return sqrt(double(x * x + y * y));
}
double Point::theta(){
    return atan(double(y) / x);
}

double Point::distance(const Point& p){
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

Point Point::relative(const Point& p){
    return Point(x - p.x, y - p.y);
}

bool Point::is_above_left(const Point& p){
    return ((x - p.x) < 0) && ((y - p.y) > 0);
}

void Point::set_position(int a, int b){
    x = a;
    y = b;
}
