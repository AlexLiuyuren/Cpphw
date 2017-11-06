//
//  LinkList.cpp
//  作业1
//
//  Created by 刘驭壬 on 2017/9/15.
//  Copyright © 2017年 刘驭壬. All rights reserved.
//

#include "LinkedList.hpp"
#include <iostream>

using namespace std;

void LinkedList::add_head(int a){
    Node *p = new Node(a);
    if (head == NULL && tail == NULL){
        head = tail = p;
    }else{
        p->next = head;
        head = p;
    }
}

int LinkedList::delete_head(){
    int value = 0;
    if(head == NULL){
        cout << "链表为空, 无法删除" << endl;
    }else if (head == tail){
        value = head->content;
        delete head;
        head = tail = NULL;
    }else{
        Node *p = head;
        value = head->content;
        head = head->next;
        delete p;
    }
    return value;
}

void LinkedList::add_tail(int a){
    Node *p = new Node(a);
    if (head == NULL && tail == NULL){
        head = tail = p;
    }else{
        tail->next = p;
        tail = p;
    }
}

int LinkedList::delete_tail(){
    int value = 0;
    if (tail == NULL){
        cout << "链表为空, 无法删除" << endl;
    }else if (head == tail){
        value = tail->content;
        delete head;
        head = tail = NULL;
    }else{
        value = tail->content;
        Node *p = head;
        while (p->next != tail){
            p = p->next;
        }
        delete tail;
        tail = p;
        tail->next = NULL;
    }
    return value;
}

LinkedList::~LinkedList(){
    Node *p = head;
    while (p != tail){
        head = head->next;
        delete p;
        p = head;
    }
    delete p;
    head = tail = NULL;
}

Node * LinkedList::get_head(){
    return head;
}

Node * LinkedList::get_tail(){
    return tail;
}

void LinkedList::print_list(){
    Node *p = head;
    while (p){
        cout << p->content << " ";
        p = p->next;
    }
    cout << endl;
}
