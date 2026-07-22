class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        map<int,int> m;
        for (int i=0;i<n;i++){
            if (m.find(nums[i])!= m.end()){
                m[nums[i]]++;
            }
            else {
                m[nums[i]] =1;
            }
        }
        int l= m.size();
        vector<pair<int,int>> result;
        for (const auto& [key, value] : m) {
            result.push_back({value,key}); 
        }
        sort(result.begin(),result.end());
        vector<int> res;
        for (int i=(l-1);i>=(l-k);i--){
            res.push_back(result[i].second);
        }
        return res;
    }
};
