class Solution {
private:
    vector<int > findPascalrow(vector<int > lastRow, int rowNum){
        if(rowNum == 0 || rowNum == 1 || rowNum == 2){
            return {};
        }
        vector<int > temp;
        temp.push_back(1);

        for(int i = 0; i < rowNum-2; i++){
            temp.push_back(lastRow[i]+lastRow[i+1]);
        }
        temp.push_back(1);
        return temp;
    }
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0){
            return {{}};
        }
        if(numRows == 1){
            return {{1}};
        }
        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1,1});
        for(int i = 3; i <= numRows; i++){
            ans.push_back(findPascalrow(ans.back(), i));
        }
        return ans;
    }
};