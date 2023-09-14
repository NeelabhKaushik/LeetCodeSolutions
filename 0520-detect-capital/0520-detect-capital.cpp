class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        
        bool allUp = true;
        for (int i = 0; i < n; i++) {
            if (word[i] < 'A' || word[i] > 'Z') {
                allUp = false;
                break;
            }
        }
        
        bool allDown = true;
        for (int i = 0; i < n; i++) {
            if (word[i] < 'a' || word[i] > 'z') {
                allDown = false;
                break;
            }
        }
        
        bool firstUp = true;
        if (word[0] < 'A' || word[0] > 'Z')
            firstUp = false;
        for (int i = 1; i < n; i++) {
            if (word[i] < 'a' || word[i] > 'z') {
                firstUp = false;
                break;
            }
        }
        
        return allUp || allDown || firstUp;
    }
};
