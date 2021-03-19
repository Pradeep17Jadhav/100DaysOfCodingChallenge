/*
https://leetcode.com/problems/count-good-triplets

Couldnt think of any other way than brutforcing this
Checked in discussion for better way but didnt find any
*/


class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int len = arr.size();
        int count = 0;
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                if(i < j)
                {
                    for(int k = 0; k < len; k++)
                    {
                        if(j < k)
                        {                     
                            if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                            {
                                count++;
                            }
                        }
                    }
                }
            }                        
        }
        return count;
    }
};
