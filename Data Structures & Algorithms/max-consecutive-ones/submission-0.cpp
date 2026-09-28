class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int res =0;
        for(int i =0;i<n;i++){
            count = 0;
            for(int j =0;j<n;j++){
                if(nums[j] = 0) break;
                count++;
            }
            res = Math.Max(res, count);
        }
        return res;
    }
};