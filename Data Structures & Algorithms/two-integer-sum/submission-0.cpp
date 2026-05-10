#include <unordered_set>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> m;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(m.contains(diff)){
                ans.push_back(m[diff]);
                ans.push_back(i);
            }
            m.insert({nums[i],i});
        }
        return ans;
    }
};
