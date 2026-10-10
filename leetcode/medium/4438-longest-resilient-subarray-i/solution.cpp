class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            long long sum=0;
            for(int j=i; j<n; j++){
                sum +=nums[j];
                if(nums[j]%k !=nums[i]%k)
                break;
                if(sum%k==nums[i]%k){
                    ans=max(ans,j-i+1);
                }
        }
    }
    return ans;
}
};