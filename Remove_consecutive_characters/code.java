//User function Template for Java

class Solution{
    public String removeConsecutiveCharacter(String S){
        
        String nw="";
        int nxt=0;
        for(int i=0;i<S.length();i++){
            char c= S.charAt(i);
            int check = (int)c;
            if(nxt != check){
             nw=nw+c;
            nxt=check;
            }
            else
            continue;
        }
        return nw;
    }
}
