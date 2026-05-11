#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int> mp;
        int largest = 0;
        int ret = 0;
        for(int n: nums){
            mp[n]++;
            if(mp[n]>largest){
                largest = mp[n];
                ret = n;
            }
        }
        return ret;
    }
};