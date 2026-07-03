1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int count = 0;
5        int left = 0;
6
7        for(int right = 0; right < nums.size() ;right++){
8            if(nums[right] != val){
9                nums[left]=nums[right];
10                left++;
11                count++;
12            }
13        }
14        return count;
15    }
16};