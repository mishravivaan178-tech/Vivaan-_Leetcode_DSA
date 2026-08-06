class Solution {
    private:
    bool isprim(int x){
        if(x<2){
            return false;
        }
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
public:
    bool completePrime(int num) {
        string s=to_string(num);
        int x=0;
        for(char c:s){
            x=x*10+(c-'0');
            if(!isprim(x)){
                return false;
            }

        }
        x=0;
        int p=1;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            x=(s[i]-'0')*p+x;
            if(!isprim(x)){
                return false;
            }
            p=p*10;

        }
        return true;

        
    }
};