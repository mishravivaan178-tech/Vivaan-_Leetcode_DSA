class Solution {
    private:
    int numb(int n){
        int rev=n;
        int k;
        int sum=0;
        while(rev>0){
            k=rev%10;
            sum=sum+(k*k);
            rev=rev/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
         unordered_set<int> seen;

        while (n!=1) {
            if (seen.count(n))
                return false;

            seen.insert(n);
            n=numb(n);
        }

        return true;
        
    }
};