/*
https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
*/

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max = 0;
        int maxCount = 0;
        for(int i = 0; i < rectangles.size(); i++)
        {
            int minSide = min(rectangles[i][0], rectangles[i][1]);  
            if(minSide > max)
            {
                max = minSide;
                maxCount = 1;                
            }
            else if(minSide == max)
                maxCount++;
        }
        return maxCount;
    }
};
