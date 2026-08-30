class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; ){
            int j=i;
            while(j+1<n &&nums[j+1]==nums[i]){
                j++;
            }
            bool appearsAgain=false;
            for(int k=0; k<i; k++){
                if(nums[k]==nums[i]){
                    appearsAgain=true;
                    break;
                }
            }
            for(int k=j+1; k<n && !appearsAgain; k++){
                if(nums[k]==nums[i]){
                    appearsAgain=true;
                    break;
                }
            }
            if(!appearsAgain)
                ans++;
            i=j+1;
        }
        return ans;
    }
};