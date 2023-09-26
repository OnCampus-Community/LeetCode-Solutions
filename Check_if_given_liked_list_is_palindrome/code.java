class Solution
{
    //Function to check whether the list is palindrome.
    boolean isPalindrome(Node head) 
    {
        //Your code here
        Node temp=head;int i=0;
        while(temp!=null)
        {
            i=i*10 + temp.data;
            temp=temp.next;
        }
        int z=i;
        int reverse = 0;  
        while(i!= 0)   
        {  
              int remainder = i % 10;  
              reverse = reverse * 10 + remainder;  
              i= i/10;  
         }   
         if(z==reverse)
         return true;
         else
         return false;

    }    
}
