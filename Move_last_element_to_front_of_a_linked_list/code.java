class Solution {
    public static Node moveToFront(Node head) {
        // code here
        if(head==null || head.next==null) return head;
        Node temp=head,prev=null;
        while(temp.next!=null)
        {
            prev=temp;
            temp=temp.next;
        }
        Node node=new Node(temp.data);
        prev.next=null;
        node.next=head;
        return node;
    }
}
