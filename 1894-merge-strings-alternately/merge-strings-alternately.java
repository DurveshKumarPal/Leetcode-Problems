class Solution {
    public String mergeAlternately(String word1, String word2) {
        String res = "";
        int iLength =0;
        if(word1.length()>=word2.length())
            {
                iLength = word1.length();

            }
            else {
                iLength = word2.length();
            }
            for (int i = 0; i < iLength; i++) {
                int isize = word1.length() - 1;
                if (i <= isize) {


                    res += String.valueOf(word1.charAt(i));
                }
                int i2size = word2.length() - 1;
                if (i2size >= i) {
                    res += String.valueOf(word2.charAt(i));
                }

            }
        
       
        return res;
    }
    
}