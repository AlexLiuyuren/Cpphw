//
//  Polynomial.cpp
//  test2
//
//  Created by 刘驭壬 on 2017/10/20.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "Polynomial.h"
#include "iostream"
#include <algorithm>
#include "string.h"
using namespace std;

Polynomial::Polynomial(int *coef, int max_order){
    this->coef = new int[max_order+1];
    this->max_order = max_order;
    for (int i = 0; i <= max_order; i++){
        this->coef[i] = coef[i];
    }
    return;
}
const Polynomial Polynomial::operator + (const Polynomial &a) const{
    const Polynomial *p;
    int minLen, maxLen;
    if (max_order > a.max_order){
        minLen = a.max_order;
        maxLen = max_order;
        p = this;
    }else{
        minLen = max_order;
        maxLen = a.max_order;
        p = &a;
    }
    int *new_coef = new int[maxLen+1];
    memset(new_coef, 0, (maxLen+1) * sizeof(int));
    for (int i = 0; i <= minLen; i++){
        new_coef[i] = coef[i] + a.coef[i];
    }
    for (int i = minLen+1; i <=maxLen; i++){
        new_coef[i] = p->coef[i];
    }
    Polynomial res = Polynomial(new_coef, maxLen);
    delete []new_coef;
    return res;
}
const Polynomial Polynomial::operator - (const Polynomial &a)const{
    int minLen, maxLen;
    bool minus;
    if (max_order > a.max_order){
        minLen = a.max_order;
        maxLen = max_order;
        minus = false;
    }else{
        minLen = max_order;
        maxLen = a.max_order;
        minus = true;
    }
    int *new_coef = new int[maxLen+1];
    memset(new_coef, 0, (maxLen+1) * sizeof(int));
    for (int i = 0; i <= minLen; i++){
        new_coef[i] = coef[i] - a.coef[i];
    }
    for (int i = minLen+1; i <=maxLen; i++){
        if (minus == false){
            new_coef[i] = coef[i];
        }else{
            new_coef[i] = -a.coef[i];
        }
        
    }
    Polynomial res = Polynomial(new_coef, maxLen);
    delete []new_coef;
    return res;
}
const Polynomial Polynomial::operator * (const Polynomial &a)const{
    int maxLen = max_order + a.max_order;
    int *new_coef = new int[maxLen+1];
    memset(new_coef, 0, (maxLen+1) * sizeof(int));
    for (int i = 0; i <= max_order; i++){
        for (int j = 0; j<= a.max_order; j++){
            new_coef[i+j] += coef[i] * a.coef[j];
        }
    }
    Polynomial res = Polynomial(new_coef, maxLen);
    delete []new_coef;
    return res;
}

void Polynomial::show()
{
    if (max_order == 0 && coef[0]==0)
    {
        cout << '0' << endl;
        return;
    }
    int has_pre = false;
    for (int i = 0; i <= max_order; i++)
    {
        if (coef[i] == 0)
            continue;
        if (i == 0)
        {
            cout << coef[i];
            has_pre = true;
        }
        else if (i == 1)
        {
            if (coef[i] > 0 && coef[i] != 1)
            {
                if (has_pre)
                    cout << '+';
                cout << coef[i];
            }
            else if (coef[i] < 0 && coef[i]!=-1)
                cout << coef[i];
            else if (coef[i] == 1)
            {
                if (has_pre)
                    cout << '+';
            }
            else if (coef[i] == -1)
                cout << '-';
            cout << "x";
            has_pre = true;
        }
        else
        {
            if (coef[i] > 0 && coef[i] != 1)
            {
                if (has_pre)
                    cout << '+';
                cout << coef[i];
            }
            else if (coef[i] < 0 && coef[i]!=-1)
                cout << coef[i];
            else if (coef[i] == 1)
            {
                if (has_pre)
                    cout << '+';
            }
            else if (coef[i] == -1)
                cout << '-';
            cout << "x^" << i;
            has_pre = true;
        }
    }
    if (has_pre == false)
        cout << '0' << endl;
    cout << endl;
    return;
}

//void Polynomial::show(){
//    bool first = true;
//    bool zero = true;
//    for (int i = 0; i <=max_order; i++){
//        if (coef[i] != 0) {
//            zero = false;
//            break;
//        }
//    }
//    if (zero == true){
//        cout << 0 << endl;
//    }
//    for (int i = 0; i <= max_order; i++){
//        if (coef[i] == 0){
//            continue;
//        }
//        if (coef[i] != 1){
//            if (i == 0){
//                cout << coef[i];
//            }else if (i == 1){
//                if (first){
//                    cout << coef[i] << "x";
//                }else{
//                    tostr(coef[i], i);
//                }
//            }else{
//                if (first){
//                    cout << coef[i] << "x^" << i;
//                }else{
//                    tostr(coef[i], i);
//                }
//            }
//        }else{
//            if (i == 0){
//                cout << coef[i];
//            }else if (i == 1){
//                if (first){
//                    cout << "x";
//                }else{
//                    tostr(coef[i], i);
//                }
//            }else{
//                if (first){
//                    cout << "x^" << i;
//                }else{
//                    tostr(coef[i], i);
//                }
//            }
//        }
//        first = false;
//    }
//    cout << endl;
//}

void Polynomial::tostr(int num, int order){
    string ret = "";
    if (num == 0){
        return;
    }else if (num != 1){
        if (num > 0){
            printf("+%d", num);
        }else{
            printf("%d", num);
        }
    }else{
        if (num > 0){
            printf("+");
        }else{
            printf("-");
        }
    }
    if (order == 0){
        return;
    }else if (order == 1){
        printf("x");
    }else{
        printf("x^%d", order);
    }
}

Polynomial & Polynomial::operator = (const Polynomial &a){
    if (coef != NULL) delete []coef;
    coef = new int[a.max_order+1];
    max_order = a.max_order;
    for (int i = 0; i <= max_order; i++){
        coef[i] = a.coef[i];
    }
    return *this;
}

Polynomial::Polynomial(const Polynomial& a){
    if (coef != NULL) delete []coef;
    coef = new int[a.max_order+1];
    max_order = a.max_order;
    for (int i = 0; i <= max_order; i++){
        coef[i] = a.coef[i];
    }
}

Polynomial::~Polynomial(){
    if (coef != NULL) {
        delete[] coef;
        coef = NULL;
    }
}
