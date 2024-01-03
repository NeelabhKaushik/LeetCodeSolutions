class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int ans = 0;
        int prevRow = 0;
        int curRow = 0;

        for(int i = 0;i < n; i++){
            for(int j = 0; j < bank[i].size(); j++){
                if(bank[i][j] =='1'){
                    curRow++;
                }
            }
            cout << curRow;
            int lazers = curRow * prevRow;
            if(curRow != 0) prevRow = curRow;
            curRow = 0;
            ans += lazers;
        }

        return ans;
    }
};