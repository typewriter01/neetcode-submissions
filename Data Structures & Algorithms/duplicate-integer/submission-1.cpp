class Solution {
public: 
    bool hasDuplicate(vector<int>& nums) {
        int n= nums.size();
        map<int,int> mp;
        for(int i=0; i<n;i++){
            auto it = mp.find(nums[i]);
            if (it != mp.end()) return true;
            else{
                mp.insert({nums[i], i});
            }
        }
        return false;
    }
};