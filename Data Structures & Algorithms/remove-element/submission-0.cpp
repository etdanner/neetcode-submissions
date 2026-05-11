class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> removed;
        int size = 0;
        for(int n: nums){
            if(n != val){
                removed.push_back(n);
                size++;
            }
        }
        nums = removed;
        return size;
    }
};