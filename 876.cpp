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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        ListNode*tt=head;
        int arr[100],i=0,j=0;
        while(temp!=NULL){
            arr[i]=temp->val;
            i+=1;
            temp=temp->next;
        }
     int val_to_find=arr[(i/2)];
     while(tt!=NULL)
     {
            if(tt->val==val_to_find && j==(i/2))
            {
                break;
            }
            tt=tt->next;
         j+=1;
     }
    return tt;
    
    
    
    
    }
    
   
};