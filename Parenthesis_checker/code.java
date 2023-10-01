class Solution
{
    //Function to check if brackets are balanced or not.
    static boolean ispar(String x)
    {
        Stack<Character> s=new Stack<>();
        s.push(x.charAt(0));
        for(char i:x.substring(1).toCharArray()){
            if(i=='(' || i=='{' || i=='['){
                s.push(i);
                continue;
            }
            if(s.size()!=0){
                if((s.peek()=='(' && i==')') || (s.peek()=='{' && i=='}') || (s.peek()=='[' && i==']')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
            
        }
        if(s.size()!=0){
            return false;
        }
        return true;
    }
}

