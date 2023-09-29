class Solution
{
    //Function to find the first non-repeating character in a string.
    static char nonrepeatingCharacter(String S)
    {
        //Your code here
        Map<Character,Integer> m = new HashMap();
        int n = S.length();
        for(int i=0;i<n;i++){
            char ch = S.charAt(i);
            m.put(ch,m.getOrDefault(ch,0)+1);
        }
        for(int i=0;i<n;i++){
            char ch = S.charAt(i);
            if(m.get(ch)==1){
                return ch;
            }
        }
        return '$';
        
    }
}
