//
//  LinkList.hpp
//  作业1
//
//  Created by 刘驭壬 on 2017/9/15.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

struct Node{
    int content;
    Node *next;
    Node(int a){
        content = a;
        next = NULL;
    }
};

class LinkedList{
private:
    Node *head, *tail;
public:
    LinkedList():head(NULL), tail(NULL){}
    LinkedList(int a){
        Node *n = new Node(a);
        head = tail = n;
    }
    void add_head(int a);
    int delete_head();
    void add_tail(int a);
    int delete_tail();
    Node *get_head();
    Node *get_tail();
    void print_list();
    ~LinkedList();
};

#endif /* LinkList_hpp */
