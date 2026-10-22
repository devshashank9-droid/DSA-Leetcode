class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = INT_MIN;
        int arrsum = 0;
        for(int st=0;st<n;st++){
         arrsum += nums[st];
         maxsum = max(arrsum,maxsum);
         if(arrsum < 0){
            arrsum = 0;
             }
        }
         return maxsum;
    }
};