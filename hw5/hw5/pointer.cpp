//
//  pointer.cpp
//  hw5
//
//  Created by 刘驭壬 on 2017/10/11.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "pointer.hpp"
#include "string.h"
#include <string>

using namespace std;

void *max(void *array, size_t count, size_t element_size, int (*cmp)(const void *p1, const void *p2)){
    void *max = array;
    for (int i = 1; i < count; i++){
        if ((*cmp)((char *)((char*)array + i * element_size), (char *)max)){
            max = (char *)array + i * element_size;
        }
    }
    return max;
}

int compare_int(const void *p1, const void *p2){
    int i1 = *(int *)p1;
    int i2 = *(int *)p2;
    if (i1 > i2){
        return 1;
    }
    return 0;
}

int compare_double(const void *p1, const void *p2){
    double d1 = *(double *)p1;
    double d2 = *(double *)p2;
    if (d1 > d2){
        return 1;
    }
    return 0;
}

int compare_string(const void *p1, const void *p2){
    char *c1 = (char *)p1;
    char *c2 = (char *)p2;
    int res = strcmp(c1, c2);
    if (res >= 0){
        return 1;
    }else{
        return 0;
    }
}

int compare_stl_string(const void *p1, const void *p2){
    string *c1 = (string *)p1;
    string *c2 = (string*)p2;
    int res = *c1>*c2?1:0;
    return res;
}
