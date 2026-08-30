class Solution {
public:
    long long modpow(long long  x,long long y){
        long long MOD=1000000007;
        long long ans=1;
        x%=MOD;
        while(y>0){
            if(y%2==1){
                ans=(ans*x)%MOD;
            }
            x=(x*x)%MOD;
            y/=2;
        }
        return ans;
    }
    int sumDecoded(vector<long long>& nums) {
        long long MOD= 1000000007;
        long long ans=0;
        for(long long num:nums){
            int width=num %10;
            long long d=num/10;
            string s=to_string(d);
            string xs=s.substr(0,width);
            string ys=s.substr(width);
            long long x=stoll(xs);
            long long y=stoll(ys);
            long long value=modpow(x,y);
            ans=(ans+value)% MOD;
            
        }
        return ans;
    }
};