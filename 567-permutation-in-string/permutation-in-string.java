class Solution {
    public boolean checkInclusion(String s1, String s2) {
        boolean result = false;
        int n1 = s1.length();
        int n2 = s2.length();
        if (n1 > n2) return false;
        HashMap<Character, Integer> map1 = new HashMap<>();
        HashMap<Character, Integer> map2 = new HashMap<>();
        for (int i = 0; i < s1.length(); i++) {
            map1.put(s1.charAt(i), map1.getOrDefault(s1.charAt(i),0)+1);
            map2.put(s2.charAt(i), map2.getOrDefault(s2.charAt(i),0)+1);
        }
        if(map1.equals(map2))
            {
                result =  true;
            }
        for (int i = s1.length(); i < s2.length(); i++) {
            if(map1.equals(map2))
            {
                result =  true;
            }
            map2.put(s2.charAt(i), map2.getOrDefault(s2.charAt(i),0)+1);
            // if (map2.size()>s1.length())
            // {
                // map2.remove(s2.charAt(i-s1.length()));
            // }
            // Remove/Decrement the old character (Left side)
            char oldChar = s2.charAt(i - n1);
            if (map2.get(oldChar) == 1) {
                map2.remove(oldChar); // Only remove completely if count is 1
            } else {
                map2.put(oldChar, map2.get(oldChar) - 1);
            }

            // 4. CHECK AFTER THE SLIDE
            if (map1.equals(map2)) return true;
        }
        return result;
    }
}