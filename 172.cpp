class Solution {
public:
    int trailingZeroes(int n) {
        int increment_5s = 5;
        int zeroes = 0;
        while(n >= increment_5s){
            zeroes += (n/increment_5s);
            increment_5s *= 5;
        }
        return zeroes;
    }
};