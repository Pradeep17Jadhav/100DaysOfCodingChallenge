/*
https://leetcode.com/problems/sum-of-all-odd-length-subarrays

Learned the accumulate method in cpp
it returns sum of the elements in an array from and to required indices
sum = accumulate(start, end, sum) where sum in arguments is initial value of sum
*/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> subarray;
        int len = arr.size();
        int sum = 0;
        for(int i = 1; i <= len; i += 2)
        {
            for(int j = 0; j <= len - i; j++)
            {
                sum = accumulate(arr.begin() + j, arr.begin() + j + i, sum);
        }
        return sum;
    }
};
