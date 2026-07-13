class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> seen;


        for (int num : nums) {
            if (seen[num] == false) {
                seen[num] = true;
            } else {
                return true;
            }

        }

        return false;
    }
};