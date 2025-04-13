class Solution {
   public  int[] twoSum(int[] nums, int target) {
        int [] index = new int [2];
        HashMap<Integer,Integer> DataSet = new HashMap<Integer, Integer>();
        for (int i = 0; i <nums.length ; i++) {
            int rem = target-nums[i];
            if(!DataSet.containsKey(rem) || i==0)
            {
                DataSet.put(nums[i],i );
            }
            else {
                    index[0] = DataSet.get(rem);
                    index[1] = i;
                    
            }

        }


        return index;
    }
}