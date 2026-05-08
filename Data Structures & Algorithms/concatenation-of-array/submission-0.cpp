class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size_nums = nums.size();
        vector<int> ans;
        for(int i = 0; i < size_nums; i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0; i < size_nums; i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};