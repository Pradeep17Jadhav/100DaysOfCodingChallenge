/**
 https://leetcode.com/problems/create-target-array-in-the-given-order
 
 insert(position, value);
*/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int len = nums.size();
        for(int i = 0; i < len; i++)
        {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};
