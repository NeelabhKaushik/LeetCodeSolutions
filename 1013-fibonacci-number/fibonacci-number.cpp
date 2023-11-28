class Solution {
public:
    int fib(int n) {
        int first = 1;
        int second = 1;
        int nThTerm = 0;
        if(n == 1 || n == 2){
            return 1;
        }
        for(int i = 2; i < n; i++){
            nThTerm = first + second;
            first = second;
            second = nThTerm;
        }
        return nThTerm;
    }
};