class Solution {
public:
    int reverse(int x) {
        // reverse a integer
        int reverse_number = 0;
        int digit;
        while(x){
            digit = x%10;
            if(reverse_number > INT_MAX/10 || reverse_number < INT_MIN/10){
                return 0;
            }
            reverse_number = reverse_number * 10 + digit;
            x = x/10;
        }
 
        // check if x < 0, if so, multiply reversed number by -1, before returning, can also check if integer lies between INT_MIN and INT_MAX   
        return reverse_number;
    }
};