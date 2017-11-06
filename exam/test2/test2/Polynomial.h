//
//  Polynomial.hpp
//  test2
//
//  Created by 刘驭壬 on 2017/10/20.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef Polynomial_h
#define Polynomial_h

#include <stdio.h>
#include <string>
using namespace std;

class Polynomial{
    int *coef;
    int max_order;
    void tostr(int num, int order);
public:
    Polynomial(int *coef, int max_order);
    Polynomial(const Polynomial& a);
    ~Polynomial();
    Polynomial & operator = (const Polynomial &a);
    const Polynomial operator + (const Polynomial &a)const;
    const Polynomial operator - (const Polynomial &a)const;
    const Polynomial operator * (const Polynomial &a)const;
    void show();
};
#endif /* Polynomial_h */
