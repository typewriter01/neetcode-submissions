class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int leftsum=0;
        int rightsum=0;
        int left=0;
        int right= 0;
        int i=0, j=n-1;
        int maxindex =0;
        for(int k=0; k<n;k++){
            if(height[k]>=height[maxindex]){
                maxindex= k;
            }
        }
        while(i<maxindex || j>maxindex){
            if(i<maxindex){
                left = max(left, height[i]);
                leftsum= leftsum+ left - height[i];
                i++;
            }
            if(j>maxindex){
                right = max(right , height[j]);
                rightsum= rightsum+ right - height[j];
                j--;
            }
            // if(height[i]<height[left]){
            //     block += height[i];
            //     continue;
            // }
            // int area= (i-left-1)*min(height[i],height[left]);
            // areasum += area;
            // areasum -= block;
            // block =0;
            // left =i;
        }
        return leftsum+rightsum;
    }
};
