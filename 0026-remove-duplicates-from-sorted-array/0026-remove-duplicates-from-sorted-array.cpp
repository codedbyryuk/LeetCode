class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int count = 1;

        for(int right=0; right < nums.size();right++){
            if(nums[left]!=nums[right]){
                left++;
                nums[left]=nums[right];
                count++;
            }
        }
        return count;
    }
};