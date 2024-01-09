class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int majorityEle1, majorityEle2 = 0;

        for(int i = 0; i < nums.size(); i++){
           if(cnt1 == 0 && majorityEle2 != nums[i]){
               majorityEle1 = nums[i];
               cnt1++;
           }
           else if(cnt2 == 0 && majorityEle1 != nums[i]){
               majorityEle2 = nums[i];
               cnt2++;
           }
           else if(nums[i] == majorityEle1) cnt1++;
           else if(nums[i] == majorityEle2) cnt2++;
           else{
               cnt1--;
               cnt2--;
           }
        }

        int totalCnt1 = 0, totalCnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == majorityEle1) totalCnt1++; 
            if(nums[i] == majorityEle2) totalCnt2++; 
        }

        vector<int> ans;

        if(totalCnt1 > nums.size()/3) ans.push_back(majorityEle1);
        if(totalCnt2 > nums.size()/3) ans.push_back(majorityEle2);

        return ans;
    }
};