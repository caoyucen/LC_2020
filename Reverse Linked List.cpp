//
//  main.cpp
//  test
//
//  Created by Yucen Cao on 5/1/20.
//  Copyright © 2020 Yucen Cao. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

struct ListNode{
public:
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    void Insert(int da = 0);
};

ListNode* reverseList(ListNode* head) {
    
    ListNode* nowHead;
    ListNode* previous = nullptr;
    nowHead = head;
    while(nowHead){
        ListNode* tempNext;
        tempNext = nowHead->next;
        nowHead->next = previous;
        previous = nowHead;
        nowHead = tempNext;
    }
    
    return (previous);
    
}


//print the list
void    printList(ListNode* temp){
    while(temp){
        cout << temp->val << endl;
        temp = temp->next;
    }
    cout << "-------" << endl;
}


int main(int argc, const char * argv[]) {
    
    ListNode* tail = new ListNode(5);
    ListNode* head;
    head = tail;
    for(int i = 4; i > 0; i--){
        ListNode* temp = new ListNode(i);
        temp->next = head;
        head = temp;
    }
    
    //print the list
    ListNode* temp1;
    temp1 = head;
    printList(temp1);
    
    ListNode* temp2;
    temp2 = reverseList(head);
    //print the list
    printList(temp2);
    
    return 0;
}

