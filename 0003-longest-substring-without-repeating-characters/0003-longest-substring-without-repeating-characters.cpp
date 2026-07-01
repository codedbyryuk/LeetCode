class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int max_streak=0;
        std::vector<int>count(256,0);
        for(int i =0;i < s.size();i++){
            count[s[i]]++;
            while(count[s[i]] > 1){
                count[s[left]]--;
                left++;
            }
            max_streak = std::max(max_streak,i-left+1);
        }
        return max_streak;
    }
};