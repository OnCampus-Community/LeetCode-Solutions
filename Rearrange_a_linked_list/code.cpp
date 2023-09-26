/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
#include<bits/stdc++.h>

class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       if(head == NULL || head->next == NULL){
           return;
       }
       vector<int> even;
       vector<int> odd;
       Node* ptr = head;
        int count = 0;
       while(ptr!=NULL){
           if(count%2 == 0){
               even.push_back(ptr->data);
           }
           else{
               odd.push_back(ptr->data);
           }
           ptr = ptr->next;
           count++;
       }
       
       if(odd.size() != 0 && even.size() != 0){
           ptr = head;
           for(int i=0; i<even.size(); i++){
               ptr->data = even[i];
               ptr = ptr->next;
           }
           for(int i=0; i<odd.size(); i++){
               ptr->data = odd[i];
               ptr = ptr->next;
           }
       }
    }
};