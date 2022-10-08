class Solution {
    public int maxArea(int[] height) {
        int l=0,r=height.length-1,area=0;
        while(l<r){
            int len=r-l;
            int w=Math.min(height[l],height[r]);
            area=Math.max(len*w,area);
            if(height[l]>=height[r]){
                --r;
            }
            else{
                ++l;
            }
        }
        return area;
    }
}