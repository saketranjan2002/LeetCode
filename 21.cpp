#include<bits/stdc++.h>
using namespace std;


//   Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode*temp=new ListNode();
        if(list1==NULL && list2==NULL){
            return nullptr;
        }
        if(list1==nullptr && list2!=nullptr){
            return list2;
        }
        if(list2==nullptr && list1!=nullptr){
            return list1;
        }
        ListNode*ans=temp;
        while(list1!=nullptr && list2!=nullptr){
            ListNode* flag=(list1->val>=list2->val)?list2:list1;
            temp->val=flag->val;
            if(flag->next!=nullptr){
                temp->next=new ListNode();
                temp=temp->next;
            }    
            if(flag==list1){
                list1=list1->next;
            }
            else{
                list2=list2->next;
            }
        }
        if(list1==nullptr){
            temp->next=list2;
        }
        else{
            temp->next=list1;
        }
        return ans;
    }
};
