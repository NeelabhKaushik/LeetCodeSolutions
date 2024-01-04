class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int > mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second == 1) return -1;
            else if(it.second == 2 || it.second == 3) ans++;
            else if(it.second > 3){
                int count = 0;
                int rem = 0;
                count = it.second/3;
                rem = it.second%3;
                ans += count;
                if(rem != 0) ans++;
            }
        }
        return ans;
    }
};