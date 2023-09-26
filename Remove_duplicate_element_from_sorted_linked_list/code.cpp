/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    Node* ptr = head;
    while(ptr->next!=NULL){
        if(ptr->data == ptr->next->data){
            ptr->next = ptr->next->next;
        }
        else{
            ptr = ptr->next;
        }
    }
    return head;
}