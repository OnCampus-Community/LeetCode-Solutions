//User function Template for Java
class Solution
{
   
    String reverseWords(String str)
    {
        // your code here
        Stack<Character> s  = new Stack<>();
        StringBuilder sb = new StringBuilder();
        int n = str.length();
        
        for(int i=0;i<n;i++){
            
            if(str.charAt(i)!='.'){
                s.push(str.charAt(i));
            }
            else{
                while(!s.isEmpty()){
                    sb.append(s.pop());
                }
                 sb.append(".");
            }
        }
        
        while(!s.isEmpty()){
            sb.append(s.pop());
        }
        return sb.toString();
    }
}
