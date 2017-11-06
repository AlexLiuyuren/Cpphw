//
//  Time.hpp
//  hw6
//
//  Created by 刘驭壬 on 2017/10/13.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
class Time{
    int hour;
    int minute;
    int second;
public:
    Time():hour(0), minute(0), second(0){}
    Time(int h, int m, int s):hour(h), minute(m), second(s){}
    const Time operator +=(int s);
    const Time operator -=(int s);
    const Time operator -(const Time & t);
    Time &operator ++();
    const Time operator ++(int);
    Time &operator --();
    const Time operator --(int);
    bool operator ==(const Time &t);
    bool operator !=(const Time &t);
    bool operator >(const Time &t);
    bool operator >=(const Time &t);
    bool operator <(const Time &t);
    bool operator <=(const Time &t);
    void print();
};
#endif /* Time_hpp */
