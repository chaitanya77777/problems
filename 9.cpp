class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long long reversed_num = 0;
        long long temp = x;
        while(temp != 0){
            int digit = temp % 10;
            reversed_num = reversed_num * 10 + digit;
            temp = temp / 10;
        }
        return x == reversed_num;
    }
};