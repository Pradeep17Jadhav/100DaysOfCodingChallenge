/*
https://leetcode.com/problems/flipping-an-image

Another code for same problem  is in link below
https://github.com/Pradeep17Jadhav/100DaysOfCodeChallenge/blob/4fcee5081720fcf4bd3f30e3e24469f0ebec99d6/Day%209/Flipping%20an%20Image.cpp

In this solution i have used reverse function and bitwise OR operator to convert 0 to 1 or 1 to 0
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++)
        {
            reverse(image[i].begin(), image[i].end());
            for(int j = 0; j < image[i].size(); j++)
                image[i][j] ^= 1;
        }
        return image;
    }
};
