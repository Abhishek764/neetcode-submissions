class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start =0;
        for(int end=0;end<nums.size();end++ ){
            if(nums[end] != 0){
                nums[start++] = nums[end];
            }
        }
        while(start<nums.size()){
            nums(start++) = 0;
        }
    }
};