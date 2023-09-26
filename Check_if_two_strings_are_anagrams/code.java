//Note: The following code uses HashMap

class Solution {
    boolean areKAnagrams(String s1, String s2, int k) {
        
        HashMap<Character, Integer> map = new HashMap<>();
        if(s1.length()!=s2.length()) return false;
        
        for(int i=0; i<s1.length(); i++)
        {
            map.put(s1.charAt(i), map.getOrDefault(s1.charAt(i),0)+1);
        }
        for(int i=0; i<s2.length(); i++)
        {
            if(!map.containsKey(s2.charAt(i))) k--;
            else if(map.containsKey(s2.charAt(i)) && map.get(s2.charAt(i))>0)
            {
                map.put(s2.charAt(i), map.get(s2.charAt(i))-1);
            }
            else if(map.containsKey(s2.charAt(i)) && map.get(s2.charAt(i))<=0) k--;
            if(k<0) return false;
        }
        return true;
    }
}
