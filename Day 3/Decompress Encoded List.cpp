/**
https://leetcode.com/problems/decompress-run-length-encoded-list
*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int len = nums.size();
        vector<int> res;
        for(int i = 0; i < len; i += 2)
        {
            int freq = nums[i];
            while(freq)
            {
                res.push_back(nums[i+1]);
                freq--;
            }
        }
        return res;
    }
};


/**
Learned another easy way from discussion section, adding my updated solution here
insert() is used - that line inserts nums[i+1] to the vector nums[i] times at the end.
*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for(int i(0); i<nums.size(); i+=2){
            result.insert(result.end(),nums[i],nums[i+1]); //insert(position, frequency, value)
        }
        return result;
    }
};