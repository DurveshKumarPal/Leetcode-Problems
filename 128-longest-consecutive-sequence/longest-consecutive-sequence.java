class Solution {
    public int longestConsecutive(int[] nums) {
  {

        if(nums.length == 0)
        {
            return  0;
        }
        HashSet<Integer> numset = new  HashSet<>();
        for(int i =0;i<nums.length;i++)
        {
            numset.add(nums[i]);
        }
        int lonmgestSuq = 1;
        for (int mun:numset) {
            if(numset.contains(mun-1))
            {
                continue;
            }else {
                int currentNum =mun;
                int curr = 1;
                while(numset
                        .contains(currentNum+1))
                {
                    curr++;
                    currentNum++;
                }
                lonmgestSuq = Math.max(lonmgestSuq,curr);
            }

        }
        return lonmgestSuq;
    }
          
    }
} 