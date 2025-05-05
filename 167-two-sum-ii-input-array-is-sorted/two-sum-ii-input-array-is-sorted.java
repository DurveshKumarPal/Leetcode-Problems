class Solution {
    public int[] twoSum(int[] numbers, int target) {
        
int ans [] = new int[2];

        HashMap<Integer, Integer> table  = new HashMap<>();
        for (int i = 0; i <numbers.length ; i++) {
            table.put(numbers[i],i+1);
        }
        for (int i = 0; i <numbers.length ; i++)
        {
            int conut = target - numbers[i];
            if(table.containsKey(conut))
            {
                int val = table.get(conut);
              
                ans[0] = i+1;
                  ans[1] = val;
break;
            }

        }


return ans;
    
    }
}