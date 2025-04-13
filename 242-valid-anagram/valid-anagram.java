class Solution {
    public static boolean isAnagram(String s, String t) {

            if (s.length()!=t.length())
            {
                return false;
            }
            int [] chatCount = new int [26];
            for (int i = 0; i <s.length() ; i++) {
                chatCount[s.charAt(i)- 'a']++;
                chatCount[t.charAt(i) - 'a']--;
            }
            for (int i = 0; i <chatCount.length ; i++) {
                if(chatCount[i]!=0)
                {
                    return false;
                }
            }
            return  true;
        }
}