class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int > ans;
        int numOfZero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) numOfZero++;
            else ans.push_back(nums[i]);
        }
        while(numOfZero--){
            ans.push_back(0);
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = ans[i];
        }
    }
};