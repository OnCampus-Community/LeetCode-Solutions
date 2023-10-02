class Solution
{

   // Should rearrange given linked list such that all even
   // positioned Nodes are before odd positioned.
   // Returns nothing
    void rearrangeEvenOdd(Node head)
    {
          //  The task is to complete this method
          Node temp=head;
          Node temp2=head.next;
          Node temp3=head.next;
          
          while(temp.next!=null && temp2.next!=null){
              temp.next=temp2.next;
              temp=temp.next;
              temp2.next=temp.next;
              temp2=temp2.next;
          }
          temp.next=temp3;

     }
}
