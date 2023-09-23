#include <bits/stdc++.h>
bool isPalindrome(Node *head)
{
    // write your code here 
    if(head == NULL || head->next == NULL){
        return 1;
    }            
    else{
        vector<int> res;
        Node* ptr = head;
        while(ptr != NULL){
            res.push_back(ptr->data);
            ptr = ptr->next;
        }
        for(int i=0; i<res.size()/2; i++){
            if(res[i] != res[res.size()-i-1]){
                return 0;
            }
        }
        return 1;
    }        
}