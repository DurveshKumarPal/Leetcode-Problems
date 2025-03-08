class Solution {
    public  int majorityElement(int[] nums) {
        int result = 0;
        int iSize = nums.length;
       // Hashtable<Integer,Integer> hashMapTable =new  Hashtable<Integer,Integer>();
        Map<Integer,Integer> hashMap =new HashMap<>();
        for (int i = 0; i <iSize; i++) {
            int occurence = 1;

            if(hashMap.containsKey(nums[i]))
            {
                int ivalue = hashMap.get(nums[i]);
                ivalue++;
                hashMap.put( nums[i],ivalue);
            }else {
                hashMap.put( nums[i],occurence);
            }
        }
        result = Collections.max(hashMap.values());
result = getKeyByValue(hashMap,result);
        return result;
    }
    public  <K, V> K getKeyByValue(Map<K, V> hashtable, V value) {
        for (Map.Entry<K, V> entry : hashtable.entrySet()) {
            if (entry.getValue().equals(value)) {
                return entry.getKey();
            }
        }
        return null; // Value not found
    }
}