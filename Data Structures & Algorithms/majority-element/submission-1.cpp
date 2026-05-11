class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mfreq = 1;
        int maj = nums[0];
        for(int i = 1; i<n; i++){
            if(mfreq == 0){
                mfreq = 1;
                maj = nums[i];
            } else if(maj != nums[i]){
                mfreq--;
            } else {
                mfreq++;
            }
        }
        return maj;
    }
};