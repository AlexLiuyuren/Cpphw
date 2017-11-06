//
//  pointer.hpp
//  hw5
//
//  Created by 刘驭壬 on 2017/10/11.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef pointer_hpp
#define pointer_hpp

#include <stdio.h>

void *max(void *array, size_t count, size_t element_size, int (*cmp)(const void *p1, const void *p2));
int compare_int(const void *p1, const void *p2);
int compare_double(const void *p1, const void *p2);
int compare_string(const void *p1, const void *p2);
int compare_stl_string(const void *p1, const void *p2);
#endif /* pointer_hpp */
