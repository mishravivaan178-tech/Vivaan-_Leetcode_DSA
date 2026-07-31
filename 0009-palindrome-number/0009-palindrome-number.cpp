class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers and numbers ending with 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        while (x > rev) {
            int dig = x % 10;
            rev = rev * 10 + dig;
            x /= 10;
        }

        // even digits: x == rev
        // odd digits:  x == rev/10
        return (x == rev || x == rev / 10);
    }
};
