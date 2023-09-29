class Solution
{
    int getMiddle(Node head)
    {
         // Your code here.
         Node temp=head;
         int count=0;
         while(temp!=null)
         {
             count++;
             temp=temp.next;
         }
         int index=(count/2)+1;
         Node curr=head;
         while(--index!=0)
         {
             curr=curr.next;
         }
         
         return curr.data;
    }
}
