class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out = "";
        char comp;
        for(int i = 0; i<strs[0].length(); i++){
            comp = strs[0][i];
            for(int j = 0; j<strs.size(); j++){
                if(comp != strs[j][i]){
                    return out;
                }
            }
            out += comp;
        }
        return out;
    }
};