//
//  main.cpp
//  test2
//
//  Created by 刘驭壬 on 2017/10/20.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include <iostream>
#include "Polynomial.h"

using namespace std;
int main(int argc, const char * argv[]) {
    int coef0[] = {-1, 1};
    int max_order0 = 1;
    Polynomial p0(coef0, max_order0);
    p0.show();
    int coef1[] = {0, 0, 0, 4, -2, 1};
    int max_order1 = 5;
    Polynomial p1(coef1, max_order1);
    int coef2[] = {-3, -4, 2, 2, 2};
    int max_order2 = 4;
    Polynomial p2(coef2, max_order2);
    p1.show();
    p2.show();
    Polynomial p3 = p1 + p2; p3.show();
    Polynomial p4 = p1 - p2; p4.show();
    Polynomial p5 = p1 * p2; p5.show();
    return 0;
}
