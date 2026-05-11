class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mfreq = 0;
        int maj = 0;
        for(int i = 0; i<n; i++){
            if(mfreq == 0){
                mfreq = 1;
                maj = nums[i];
            } 
            mfreq += (nums[i] == maj) ? 1 : -1;
        }
        return maj;
    }
};