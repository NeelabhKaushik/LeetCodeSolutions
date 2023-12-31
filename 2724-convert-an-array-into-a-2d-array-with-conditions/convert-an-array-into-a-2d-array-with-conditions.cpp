class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map<int, int> mp; 
        int cnt =0;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            cnt = max(cnt,mp[nums[i]]);
        }

        vector<vector<int>> ans(cnt);
        for(auto it: mp){
            int num = it.first;
            int freq = it.second;
            for(int i =0;i<freq;i++){
                ans[i].push_back(num);
            }
        }

        return ans;
    }
};