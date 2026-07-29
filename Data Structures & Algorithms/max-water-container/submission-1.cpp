class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea =0;
        int i=0,j=n-1;
        while(i<j){
            int area= (j-i)*min(heights[i],heights[j]);
            maxarea = max(maxarea, area);
            if(heights[j]>heights[i])i++;
            else j--;
            // i = i + (heights[j]>=heights[i]);
            // j = j - (heights[i]>=heights[j]);
        } 
        return maxarea;
    }
};
