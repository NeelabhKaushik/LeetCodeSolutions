class Solution {
public:
    long long reverse(int x) {
        long long tempDigit = x;
        if (x < 0) tempDigit = -tempDigit;
        long long ansDigit = 0;
        while (tempDigit > 0) {
            int digit = tempDigit % 10;
            tempDigit /= 10;
            if (ansDigit > INT_MAX / 10 || (ansDigit == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return 0; 
            }
            ansDigit = ansDigit * 10 + digit;
        }
        if (x < 0) ansDigit = -ansDigit;
        return ansDigit;
    }
};
