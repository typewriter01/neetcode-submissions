class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        //set<int> res;
        for(int i=0; i<n;i++){
            set<int> res;
            for(int j=i+1; j<n;j++){
                int x= (-1)*(nums[i]+nums[j]);
                if(res.find(x) == res.end()){
                    res.insert(nums[j]);
                }
                else {
                    vector<int> temp= {nums[i],nums[j],x};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }

            }
        }
        vector<vector<int>> ans1(ans.begin(),ans.end());
        return ans1;
    }
};
