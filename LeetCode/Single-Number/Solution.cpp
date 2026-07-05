1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        std::unordered_map<int,int>counts;
5
6        for(int n : nums){
7            counts[n]++;
8        }
9
10        int unique_num=0;
11        for(const auto& [n,freq]:counts){
12            if(freq==1){
13                return n;
14            }
15        }
16
17        return unique_num==1;
18        
19    }
20};