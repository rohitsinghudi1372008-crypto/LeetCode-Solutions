class Solution {
private:
    // Yeh hamara recursive helper function hai jisme index aur ans pass honge
    void solve(int index, vector<int>& nums, vector<vector<int>>& ans) {
        // 1. Base Case
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // 2. Choices Loop (Function ke andar!)
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);       // DO
            solve(index + 1, nums, ans);      // RECURSE
            swap(nums[index], nums[i]);       // UNDO (Backtrack)
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; // Answer store karne ke liye
        solve(0, nums, ans);     // 0th index se shuru karo
        return ans;              // Final answer return karo
    }
};