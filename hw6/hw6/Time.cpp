//
//  Time.cpp
//  hw6
//
//  Created by 刘驭壬 on 2017/10/13.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "Time.hpp"
#include <iostream>

using namespace std;

const Time Time::operator +=(int s){
    Time tmp = (*this);
    int add_hour = s / 3600;
    s %= 3600;
    int add_minute = s / 60;
    s %= 60;
    int add_sec = s;
    tmp.hour = (tmp.hour + add_hour) % 24;
    tmp.minute = (tmp.minute + add_minute) % 60;
    tmp.second = (tmp.second + add_sec) % 60;
    return tmp;
}
const Time Time::operator -=(int s){
    Time tmp = (*this);
    int dec_hour = s / 3600;
    s %= 3600;
    int dec_minute = s / 60;
    s %= 60;
    int dec_sec = s;
    tmp.hour -= dec_hour;
    tmp.minute -= dec_minute;
    tmp.second -= dec_sec;
    if (tmp.second < 0){
        tmp.second += 60;
        tmp.minute --;
    }
    if (tmp.minute < 0){
        tmp.minute += 60;
        tmp.hour --;
    }
    while (tmp.hour < 0){
        tmp.hour += 24;
    }
    return tmp;
}
const Time Time::operator -(const Time & t){
    Time tmp = *this;
    tmp.hour -= t.hour;
    tmp.minute -= t.minute;
    tmp.second -= t.second;
    if (tmp.second < 0){
        tmp.second += 60;
        tmp.minute --;
    }
    if (tmp.minute < 0){
        tmp.minute += 60;
        tmp.hour --;
    }
    while (tmp.hour < 0){
        tmp.hour += 24;
    }
    return tmp;
}
Time & Time::operator ++(){
    second ++;
    if (second >= 60){
        second = 0;
        minute ++;
    }
    if (minute >=60){
        minute = 0;
        hour ++;
    }
    if (hour >= 24){
        hour = 0;
    }
    return *this;
}
const Time Time::operator ++(int){
    Time tmp = (*this);
    ++(*this);
    return tmp;
}

Time & Time::operator --(){
    second --;
    if (second < 0){
        second += 60;
        minute --;
    }
    if (minute < 0){
        minute += 60;
        hour --;
    }
    while (hour < 0){
        hour += 24;
    }
    return *this;
}
const Time Time::operator --(int){
    Time tmp = (*this);
    ++(*this);
    return tmp;
}
bool Time::operator ==(const Time &t){
    return hour==t.hour && minute==t.minute && second==t.second;
}

bool Time::operator !=(const Time &t){
    return !(*this == t);
}

bool Time::operator >(const Time &t){
    if (hour > t.hour){
        return true;
    }else if (hour < t.hour){
        return false;
    }else if (minute > t.minute){
        return true;
    }else if (minute < t.minute){
        return false;
    }else if (second > t.second){
        return true;
    }else{
        return false;
    }
}
bool Time::operator >=(const Time &t){
    if (*this > t || (hour==t.hour && minute==t.minute && second==t.second)){
        return true;
    }
    return false;
}

bool Time::operator <(const Time &t){
    return !(*this >= t);
}

bool Time::operator <=(const Time &t){
    return !(*this > t);
}

void Time::print(){
    cout << "hour: " << hour << ", minute: " << minute << ", second: " << second << endl;
}


