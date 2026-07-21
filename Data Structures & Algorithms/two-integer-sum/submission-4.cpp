class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0;
        int j= n-1;
        vector<vector<int>> mp;
        for(int i=0; i<n;i++){
            mp.push_back({nums[i],i});
        }
        sort(mp.begin(), mp.end());
        while(i<j){
            int x = (mp[i][0]+mp[j][0]);
            if (x == target){
                return { min(mp[i][1],mp[j][1]), max(mp[i][1],mp[j][1]) };
            }
            else if (x > target){
                j--;
            }
            else{
                i++;
            }
        }
        
            return { };
    }
};
