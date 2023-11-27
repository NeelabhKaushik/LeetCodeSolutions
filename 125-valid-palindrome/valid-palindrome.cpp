class Solution {
public:
    bool isPalindrome(string s) {
        string newString = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i]>='A' && s[i] <='z'){
                if(isupper(s[i])){
                    newString += tolower(s[i]);
                } 
                if(islower(s[i])){
                    newString += s[i];
                }
            }
            if(s[i] >= '0' && s[i] <= '9'){
                newString += s[i];
            }
        }
        for(int i = 0; i < newString.size()/2; i++){
            if(newString[i] != newString[newString.size()-i-1]) return false;
        }
        return true;
    }
};