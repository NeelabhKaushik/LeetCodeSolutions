class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int > times(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            if(times[nums[i]] > 0) return nums[i];
            times[nums[i]]++;
        }
        return -1;
    }
};