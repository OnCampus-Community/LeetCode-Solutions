class Solution{
public:
  ListNode *moveToFront(ListNode *head){
    if(head == NULL || head->next == NULL){
      return head;
    }
        else{
      ListNode* ptr = head;
      while(ptr ->next->next != NULL){
        ptr = ptr->next;
      }
      ptr->next->next = head;
      ListNode* ans = ptr->next;
      ptr->next = NULL;
      return ans;
    }
  }
};