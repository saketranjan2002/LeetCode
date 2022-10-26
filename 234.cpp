#include<bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*temp;
        temp=head;
        int i=0,j;
        int arr[100000];
        while(temp!=NULL){
            arr[i]=temp->val;
            i+=1;
            temp=temp->next;
        }
        for(j=0;j<i;j++){
            if(arr[j]==arr[i-j-1]){
                continue;
            }
            else{
                return false;
                }
            
        }
        return true;
        
    }
};